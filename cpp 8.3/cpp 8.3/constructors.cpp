#include <iostream>

using namespace std;


class First
{
public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};


class Second
{
	First fir;
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};
class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public: // 아무일도 안하는 default생성자가 이미 존재한다.... 세상에나
	// constructor가 생성을 하는게 아니고 construction될떄 자동으로 호출이 되는 함수다
	// 생성자를 하나라도 만들면 기본 생성자가 생성되지 않는다. 이 점 명심하자.
	/*Fraction()
	{
		m_numerator = 1;
		m_denominator = 1;
	} *///기본 생성자를 만들거나. overloading를 이용해서 default값으로 오류를 없애는 방식
	Fraction(const int& num_in = 1, const int& den_in = 1) //constructor 외부에서 호출하려고 쓰는 것이 아님
	{ 
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "Fraction() constructor" << endl;
	}


	void print()
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}
};

int main()
{

	//Fraction frac; // frac() 생성자에 parameter가 하나도 없을 땐 괄호를 빼게 되어 있다. 함수랑 헷갈림
	//frac.print();

	Fraction one_thirds{ 1, 3 }; //uniform initializtion은 타입변환을 지원하지 않는다. 이게 좀 더 엄격하다.
	Fraction one_thirds2(2.0, 3); // warning은 뜨지만 실행은 된다...? waring도 안뜨는데..
	one_thirds2.print();


	Second sec; //First가 먼저 만들어지고, Second가 나중에 만들어짐


	return 0;
}