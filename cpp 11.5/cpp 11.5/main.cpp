#include <iostream>

using namespace std;

class Base
{
public:
	int m_public; // �׳� �� ���
protected:
	int m_protected; // �ڽ� Ŭ�������Ը� ���� ���
private:
	int m_private; // �׳� �� ����
};

class Derived :private Base // public Base, protected Base 
{ // class�� �ɹ� ��ü�� private, protectd, public Ÿ������ �ٲ�� ���Ӽ��� ���� �ٸ���
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