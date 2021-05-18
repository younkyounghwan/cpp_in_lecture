#include <iostream>

using namespace std;

class A
{
public: 
	void print() {  //final�� ����ϸ� �� Ŭ������ ����� �� ���� �ȴ�.
		cout << "A" << endl; 
	} 

	virtual A* getThis() { // �ں�����Ʈ ���� Ÿ��
		cout << "A::getThis()" << endl;
		return this;
	}
};

class B : public A
{
public: // Ÿ���� �ٸ��� �������̵��� ���� �ʴ´�. ������ Ÿ��, ���� Ÿ�� ���
	void print() { // override�� ��������� ����� �ϴµ��� ������ �ȴ�.
		cout << "B" << endl; 
	} 

	virtual B* getThis() {
		cout << "B::getThis()" << endl;
		return this;
	}
};

class C : public B
{
public:
	virtual void print() { 
		cout << "C" << endl; 
	}
};

class D : public C
{
public:
	virtual void print() { 
		cout << "D" << endl; 
	}
};

int main()
{
	A a;
	B b;
	C c;

	A& ref = b;
	b.getThis()->print();
	ref.getThis()->print();

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;

	return 0;
}