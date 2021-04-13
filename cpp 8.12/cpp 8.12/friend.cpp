#include <iostream>

using namespace std;
class A; //foward declaraction

class B
{
private:
	int m_value = 2;
public:

	void doSomething(A& a);

};



class A
{
private:
	int m_value = 1;

	//friend void doSomething(A& a, B& b); // private이지만 friend로 설정해 주었기 때문에 접근이 가능하다.

	//friend class B;
	friend void B::doSomething(A& a);

};


void B::doSomething(A& a) {
	cout << a.m_value << endl;
}

int main()
{
	A a;
	B b;
	b.doSomething(a);

	return 0;
}