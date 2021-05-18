#include <iostream>

using namespace std;

class A
{
public: 
	void print() {  //final을 사용하면 이 클래스를 상속할 수 없게 된다.
		cout << "A" << endl; 
	} 

	virtual A* getThis() { // 코베리언트 리턴 타입
		cout << "A::getThis()" << endl;
		return this;
	}
};

class B : public A
{
public: // 타입이 다르면 오버라이딩이 되지 않는다. 프로토 타입, 변수 타입 등등
	void print() { // override를 적어놓으면 디버깅 하는데에 도움이 된다.
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