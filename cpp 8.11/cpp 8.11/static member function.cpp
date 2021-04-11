#include <iostream>

using namespace std;

class Something
{
public:

	class _init
	{
	public:
		_init()
		{
			s_value = 1024; // static member variable을 초기화하는 방법
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initailizer;

public:


	Something()
		:m_value(123) //, s_value(1024) // static member variable은 생성자에서 초기화 할 수 없다.  static constructor를 생성할 수 없는거다.
	{}
	static int getValue()
	{
		return s_value; //static에서는 this 포인터를 사용할 수 없다. - this로 해야하는 모든 것이 안됨.

	}

	int temp() {
		return this->s_value;
	}

};

int Something::s_value = 1024;
Something::_init Something::s_initailizer;

int main()
{
	cout << Something::getValue() << endl; //static member function을 사용해서 instance를 호출할 수 있다.


	Something s1, s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;


	//int(Something:: * fptr1)() = s1.temp; //static member function은 주소값이 항상 같기 때문에 다음과 같이 함수를 따로 호출하면 오류가 생긴다.
	int(Something:: * fptr1)() = &Something::temp;

	cout << (s2.*fptr1)() << endl;

	int(* fptr2)() = &Something::getValue;

	cout << fptr2() << endl; //특정 인스턴스와 연결을 시키지 않아야 한다. (하...... 내가 머리가 나빠서 열받는건가...... ) 
	// 이랬다 저랬다 그러는 거 같은 느낌은 나만 받는건가?

	return 0;
}