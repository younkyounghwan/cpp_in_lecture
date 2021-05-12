#include <iostream>

class Mother
{
public:
	int m_i;

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
public:
	Child()
		:m_d(1.0)
	{
		this->m_i = 10;
		this->Mother::m_i = 1024;
	
		std::cout << "Child constuctor" << std::endl;
	}
};

class A
{
public:
	A()
	{
		std::cout << "A constructor" << std::endl;
	}
};

class B : public A
{
public:
	B()
	{
		std::cout << "B constructor" << std::endl;
	}
};
class C : public B
{
public:
	C()
	{
		std::cout << "C constructor" << std::endl;
	}
};

int main()
{
	//Mother mother;
	//Child child;
	C c;
}