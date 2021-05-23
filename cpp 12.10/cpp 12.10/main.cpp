#include <iostream>
#include <string>

// õõ�� �����ϸ鼭 �̹� ���Ǹ� ���� 
// �ڵ��� �ǵ��� ��ġ ������ ����ó�� �����鼭 �ڵ带 �о��
// �����Ҵ��� �ַ� ��������� �ʴ´�.
// �ѹ����� �˾Ƶθ� ��ü������ �����ϴµ��� ������ �ȴ�.


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
	auto* base_to_d1 = static_cast<Derived2*>(base); // dynamic_cast�� �����Ͽ� �����ϸ� null���� �־������.

	if (&base_to_d1 != nullptr)
		cout << base_to_d1->m_name << endl;
	else 
		cout << "Failed" << endl;

	cout << base_to_d1->m_name << endl;
	// base_to_d1->m_j = 256;

	// cout << d1.m_j << endl;


	return 0;
}