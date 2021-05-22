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
	Base &b1 = d1; // &를 넣고 안넣고의 차이 
	// Derived가 Base보다 정보량이 많기 때문에, Derived를 Base에 copy intialize로 할당하게 되면 데이터가 일부러 짤려나간다.

	b1.print();

	doSomething(d1);
	
	cout << endl;

	Base b;
	Derived d;

	vector<Base*> my_vec; // vector에는 reference를 넣을 수가 없다.
	my_vec.push_back(&b); // reference를 굳이 사용하는 방법이 있는데 굳이 해야하나 싶다.
	my_vec.push_back(&d); // Base에 의한 슬라이싱

	for (auto& e : my_vec)
		e->print();

	return 0;
}