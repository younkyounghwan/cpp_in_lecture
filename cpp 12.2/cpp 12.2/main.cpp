#include <iostream>

using namespace std;

class A
{
public: // 호출이 빈번하게 되는 함수에 virtual를 넣는건 지양하자. 너무 느리다.
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	virtual void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	virtual void print() { cout << "D" << endl; }
};

int main()
{
	A a;
	B b;
	C c;
	D d;
	
	B& ref = c;  // 상위 클래스가 virtual이면 하위 클래스의 변수도 virtual처럼 행동한다.
	ref.print(); // virtual  사용시 오버라이딩된 값이 출력된다. 거처가는 값이라도 오버라이딩 가능.

	return 0;
}