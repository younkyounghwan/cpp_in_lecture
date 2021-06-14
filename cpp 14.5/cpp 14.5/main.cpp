#include <iostream>

using namespace std;

class A
{
private:
	int m_x;
public:
	A(int x) : m_x(x)
	{
		if (x <= 0)
			throw 1;
	}
};

class B : public A
{
public:
	//B(int x)
	//	: A(x)
	//{}

	B(int x) try : A(x) // 생성자에서 try를 하고 캐치를 하면 rethrow를 자동으로 실행한다.
	{
		//do initialization
	}
	catch (...)
	{
		cout << "Catch in B constructor " << endl;
		// throw;
	}
};

//void doSomething()
//{
//	try
//	{
//		throw - 1;
//	}
//	catch (...)
//	{
//		cout << "Catch in doSomething()" << endl;
//	}
//}

int main()
{
	try
	{
		// doSomething();
		B b(0);
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}
	return 0;
}