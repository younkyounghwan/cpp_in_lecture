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
	{ //copy constructor는 자기 자신이 parameter로 들어가는 것이다.
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
		//this->m_length = source.m_length;  default copy constructor 자동으로 만들어준다. 근데 동적할당에서는 이게 문제가 생긴데 근데 나도 이유는 몰라
		cout << "Assignment operator " << endl;

		if (this == &source) // prevent self-assignment
			return *this; // main에서 hello = hello; 이런거 하지 말라고 막아놈

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