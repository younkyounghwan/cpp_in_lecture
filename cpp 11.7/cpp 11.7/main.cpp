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
		cout << "I am base " << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		out << "this is base output" << endl;
		return out;
	}
};

class Derived :public Base
{
private:
	double m_d;

public:
	Derived(int value)
		:Base(value)
	{}

	void print()
	{
		Base::print();
		cout << "I am derived" << endl;
	}
	friend std::ostream& operator << (std::ostream& out, const Derived& d)
	{
		out << static_cast<Base>(d); // wow amazing!
		out << "this is derived output" << endl;
		return out;
	}
};

int main()
{
	Base base(5);
	base.print();
	cout << base << endl;

	Derived derived(7);
	derived.print();
	cout << derived << endl;

	return 0;
}