#include <iostream>

using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}
};

class Derived : public Base
{
private:
	double m_d;

	//using Base::print; // do ont add ()

public:
	Derived(int value)
		: Base(value)
	{}

	using Base::m_i; // 이렇게 되면 m_i는 Derived 안에서 public이 된다.

	// void print() = delete;
	
};


int main()
{
	Base base(7);
	Derived derived(7);
	base.print();
	derived.print();
	// derived.m_i = 1024;
	return 0;
}