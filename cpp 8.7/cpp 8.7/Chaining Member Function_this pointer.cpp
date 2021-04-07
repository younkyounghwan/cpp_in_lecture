#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		this -> setID(id); //  this의 setID를 사용하자
	//	(*this).setID(id); // 보이지 않는 포인터가 들어가 있는 것
		this -> m_id;

		cout << this << endl; // this는 자기 자신의 주소를 출력해준다.
		
	}

	void setID(int id){ m_id = id; }
	int getID() { return m_id; }

};

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		: m_value(init_value)
	{}


	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mult(int value) {	m_value *= value; return *this;	}
	
	void print()
	{
		cout << m_value << endl;
	}
};

int main()
{
	Simple  s1(1), s2(2);
	s1.setID(2);
	s2.setID(4); // 구현된 함수는 따로따로 생성되지 않고 하나를 중복해서 사용

	cout << &s1 << " " << &s2 << endl;

	//Simple::setID(&s1, 1); == s2.setID(4); 

	cout << endl;

	Calc cal(10);
	Calc& temp1 = cal.add(10);
	Calc& temp2 = cal.sub(1);
	Calc& temp3 = cal.mult(2);
	temp3.print(); // chaining member function
	// 과연 실용성은 있는가?
	
	//cal.add(10).sub(1).mult(2).print();
	
	/*cal.add(10);
	cal.sub(1);
	cal.mult(2);
	cal.print();*/


	return 0;
}