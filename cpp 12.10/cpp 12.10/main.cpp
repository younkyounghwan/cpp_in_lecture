#include <iostream>
#include <string>

// 천천히 음미하면서 이번 강의를 들어보자 
// 코드의 의도를 마치 생명의 숨결처럼 느끼면서 코드를 읽어보자
// 동적할당을 주로 사용하지는 않는다.
// 한번쯤은 알아두면 객체지향을 이해하는데에 도움이 된다.


using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "I'm Base" << endl;
	}
};

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

class Derived2 : public Base
{
public:
	string m_name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

int main()
{
	Derived1 d1;
	Base* base = &d1;
	d1.m_j;

	// static_cast vs dynamic_cast 
	auto* base_to_d1 = static_cast<Derived2*>(base); // dynamic_cast는 컴파일에 실패하면 null값을 넣어버린다.

	if (&base_to_d1 != nullptr)
		cout << base_to_d1->m_name << endl;
	else 
		cout << "Failed" << endl;

	cout << base_to_d1->m_name << endl;
	// base_to_d1->m_j = 256;

	// cout << d1.m_j << endl;


	return 0;
}