#include <iostream>

using namespace std;

class Mother
{
private:
	int m_i;

public:
	Mother(const int& i_in = 0)
		:m_i(i_in)
	{
		std::cout << "Mother constuctor" << std::endl;
	}
};

class Child : public Mother
{
public:
	double m_d;
	int m_temp;
public:
	Child()
		:Mother(1024), m_d(1.0), m_temp(10)
	{


		std::cout << "Child constuctor" << std::endl;
	}
};

class A
{
public:
	A(int a)		
	{
		cout << "A: " << a << endl;
	}
	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		:A(a)
	{
		cout << "B: " << b << endl;
	}
	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public B 
{
public:
	C(int a, double b, char c)
		:B(a, b)
	{
		cout << "C: " << c << endl;
	}
	~C()
	{
		cout << "Destructor C" << endl;
	}
};

int main()
{


	C c(1024, 3.14, "a");

	return 0;
}
