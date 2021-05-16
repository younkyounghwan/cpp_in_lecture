#include <iostream>

using namespace std;

class A
{
public:
	void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	void print() { cout << "D" << endl; }
};

int main()
{

	A a;
	B b;
	C c;
	D d;
	
	A& ref = b; // output: A
	ref.print();

	return 0;
}