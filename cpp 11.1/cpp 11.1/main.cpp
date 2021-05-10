// ���α׷��� ����� ������ ���� ȿ������ ������ �����ߴ�. ���� ��������� �س��� ���� �ƴϴ�.

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
{ // Mother class�� �ִ� �͵��� �� ����� �� �ִ�. (��� ����)
private:
	double m_d;

public:
	Child(const int& i_in, const double& d_in)
	//	: m_i(i_in), m_d(d_in)
		: Mother(i_in), m_d(d_in)
	{ // �ڽ� Ŭ������ �����ڰ� ȣ��� �� �θ� Ŭ������ �����ڵ� ���� �����ȴ�.
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