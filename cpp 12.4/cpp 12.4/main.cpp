#include <iostream>

using namespace std;
 
class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	virtual ~Derived() override
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	//Derived derived(5);

	
	Derived *derived = new Derived(5);
	Base *base = derived;
	delete base; // Base의 소멸자를 virtual로 호출하면 Derived의 소멸자까지 호출할 수 있기 때문에 memory leak을 막을 수 있다. 
	

	return 0;
}