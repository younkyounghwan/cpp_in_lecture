#include <iostream>

using namespace std;

class A
{
public: 
	virtual void print(int x) { cout << "A" << endl; }
};

class B : public A
{
public:
	virtual void print(int x) override { cout << "B" << endl; } // parameter가 다르면 overriding을 할 수가 없다.
};

class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	virtual void print() { cout << "D" << endl; }
};

int main()
{
	A a;
	B b;
	C c;

	A& ref = b;
	ref.print(1);

	return 0;
}