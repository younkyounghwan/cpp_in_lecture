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

int main()
{
	Simple  s1(1), s2(2);
	s1.setID(2);
	s2.setID(4); // 구현된 함수는 따로따로 생성되지 않고 하나를 중복해서 사용

	cout << &s1 << " " << &s2 << endl;

	//Simple::setID(&s1, 1); == s2.setID(4); 

	return 0;
}