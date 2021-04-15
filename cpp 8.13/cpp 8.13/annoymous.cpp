#include <iostream>

using namespace std;

class A
{
public:

	int m_value;


	A(const int& input)
		:m_value(input)
	{
		cout << "Constructor" << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}
	void printdouble()
	{
		cout << m_value * 2 << endl;
	}
};

int main()
{
	A a(1);
	a.printdouble();

	A(1).printdouble();

	//A().print(); //A()�� Lvalue�� �ƴ� Rvalue�� �۵��Ѵ�.
	//A().print();

	return 0;
}