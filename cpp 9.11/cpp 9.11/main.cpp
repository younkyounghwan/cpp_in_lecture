//Deep copy vs Shallow copy

#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
	//private:
public:
	char* m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char* source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];


		m_data[m_length - 1] = '\0';	
	}

	MyString(const MyString& source)
	{ //copy constructor�� �ڱ� �ڽ��� parameter�� ���� ���̴�.
		cout << "Copy constructor " << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	MyString& operator = (const MyString& source)
	{
		//shallow copy
		//this->m_data = source.m_data;
		//this->m_length = source.m_length;  default copy constructor �ڵ����� ������ش�. �ٵ� �����Ҵ翡���� �̰� ������ ���䵥 �ٵ� ���� ������ ����
		cout << "Assignment operator " << endl;

		if (this == &source) // prevent self-assignment
			return *this; // main���� hello = hello; �̷��� ���� ����� ���Ƴ�

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];

		}
		else
			m_data = nullptr;

		return *this;
	}


	~MyString()
	{
		delete[] m_data;
	}
	


	char* getString() { return m_data; }
	int getLength() { return m_length; }

};



int main()
{
	MyString hello("Hello");

	MyString str1 = hello;

	MyString str2;
	str2 = hello;

	/*cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello;
		
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
	}

	cout << hello.getString() << endl;*/
	return 0;
}