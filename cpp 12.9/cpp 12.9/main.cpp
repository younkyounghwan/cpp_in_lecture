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
		cout << "I'm Derived" << endl;
	}
};

void doSomething(Base& b)
{
	b.print();
}

int main()
{
	Derived d1;
	Base &b1 = d1; // &�� �ְ� �ȳְ��� ���� 
	// Derived�� Base���� �������� ���� ������, Derived�� Base�� copy intialize�� �Ҵ��ϰ� �Ǹ� �����Ͱ� �Ϻη� ©��������.

	b1.print();

	doSomething(d1);
	
	cout << endl;

	Base b;
	Derived d;

	vector<Base*> my_vec; // vector���� reference�� ���� ���� ����.
	my_vec.push_back(&b); // reference�� ���� ����ϴ� ����� �ִµ� ���� �ؾ��ϳ� �ʹ�.
	my_vec.push_back(&d); // Base�� ���� �����̽�

	for (auto& e : my_vec)
		e->print();

	return 0;
}