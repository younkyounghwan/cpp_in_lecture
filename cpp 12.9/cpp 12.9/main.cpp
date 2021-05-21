#include <iostream>
#include <vector>
#include <functional>

using namespace std;

class Base
{
public:
	int m_i;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived : public Base
{
public: 
	int m_j = 1;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

void doSomething(Base& b)
{

}

int main()
{
	Derived d;
	Base& b = d; // &�� �ְ� �ȳְ��� ����

	b.print();


	return 0;
}