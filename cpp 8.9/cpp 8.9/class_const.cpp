#include <iostream>
#include <string>
 
using namespace std;

class Something
{
public:
	int m_value2 = 0;
	string m_value = "default";

	Something(const Something& st_in)
	{ // copy constructor
		m_value2 = st_in.m_value2;

		cout << "Copy constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue2(int value) 
	{
		m_value2 = value; 
	}
	int getValue2() const 
	{
		return m_value2; 
	}

	const string& getValue() const { // const�� overloading�� ������ �� �ִ�.
		cout << "const version" << endl;
		return m_value; 
	}
	string& getValue() { 
		cout << "non-const version" << endl;
		return m_value;
	}
};

//void print(const Something& st)
//{
//	cout << &st << endl;
//
//	cout << st.getValue() << endl;
//}

int main()
{
	Something something; 
	something.getValue();

	// something.setValue(3); //const�� ����ϸ� setvalue�� ������� ����.

	//cout << something.getValue() << endl; // member function�� const�� �ƴϸ� ���� �߻� 

	//cout << endl;

	cout << &something << endl;

	//print(something);






	const Something something2;
	something2.getValue();

	return 0;
}