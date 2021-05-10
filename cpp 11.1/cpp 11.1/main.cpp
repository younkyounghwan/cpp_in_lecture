// 프로그래밍 언어의 발전은 가장 효율적인 방향을 지향했다. 누구 엿먹으라고 해놓은 것이 아니다.

#include <iostream>

using namespace std;

class Mother
{
private:
//protected:
//public:
	int m_i;

public:
	//Mother()
	//	: m_i(0)
	//{}
	Mother(const int& i_in)
		:m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}

	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Child : public Mother // derived class
{ // Mother class에 있는 것들을 다 사용할 수 있다. (몇가지 빼고)
private:
	double m_d;

public:
	Child(const int& i_in, const double& d_in)
	//	: m_i(i_in), m_d(d_in)
		: Mother(i_in), m_d(d_in)
	{ // 자식 클래스는 생성자가 호출될 때 부모 클래스의 생성자도 같이 생성된다.
		/*Mother::setValue(i_in);
		m_d = d_in;*/
	}

	void setValue(const int& i_n, const double& d_in)
	{
		Mother::setValue(i_n);
		m_d = d_in;
	}
	void setValue(const double& d_in)
	{
		m_d = d_in;
	}
	
	double getValue()
	{
		return m_d;
	}
};



class Daughter : public Mother 
{

};

class Son : public Mother
{

};

int main()
{
	Mother mother(1024);
	mother.setValue(1024);
	cout << mother.getValue() << endl;

	Child child(1024,128);
	/*child.setValue(128);*/
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;
	return 0;
}