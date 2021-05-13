#include <iostream>

using namespace std;

class Base
{
public:
	int m_public; // 그냥 다 허용
protected:
	int m_protected; // 자식 클래스에게만 접근 허용
private:
	int m_private; // 그냥 다 불허
};

class Derived :private Base // public Base, protected Base 
{ // class의 맴버 자체가 private, protectd, public 타입으로 바뀌며 쓰임세가 각각 다르다
public:
	Derived()
	{
		m_public = 123;
		m_protected = 123;
		// m_private = 123;
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		//Derived::m_public;
	}
};

int main()
{
	Base base;
	base.m_public = 123;
	// base.m_protected = 123;
	// base.m_private = 123;

	Derived derived;
	//derived.m_public = 1024;
	//derived.m_protected = 1024;
	//derived.m_private = 1024;

	return 0;
}