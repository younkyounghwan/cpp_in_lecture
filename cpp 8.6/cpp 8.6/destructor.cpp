#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;
public:
	Simple(const int& id_in)
		:m_id(id_in)
	{
		cout << "constructor " << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}
};

class IntArray
{
private:
	int* m_arr = nullptr;
	int m_length = 0;
	
public:
	IntArray(const int& length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];

		// cout << "Constructor " << endl;
	}

	~IntArray()
	{
		if(m_arr != nullptr)
			delete[] m_arr; // 동적 할당으로 메모리를 할당하면 반드시 삭제를 해줘야 한다.
	}

	int size() { return m_length; }
};
							
int main()							   //    <output>
{									   // constructor 0
	Simple s1(0);					   // constructor 1
	Simple s2(1);                      // destructor 1
									   // destructor 0

	cout << endl;
									    //    <output>
	Simple *sim1 = new Simple(0);		// constructor 0
	Simple sim2(1);						// constructor 1
										// destructor 0
	delete sim1;						// destructor 1


	while (1)
	{
		IntArray my_int_arr(10000);
		// delete[] my_int_arr.m_arr;
	}



	return 0;
}