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

public: // �ƹ��ϵ� ���ϴ� default�����ڰ� �̹� �����Ѵ�.... ���󿡳�
	// constructor�� ������ �ϴ°� �ƴϰ� construction�ɋ� �ڵ����� ȣ���� �Ǵ� �Լ���
	// �����ڸ� �ϳ��� ����� �⺻ �����ڰ� �������� �ʴ´�. �� �� �������.
	/*Fraction()
	{
		m_numerator = 1;
		m_denominator = 1;
	} *///�⺻ �����ڸ� ����ų�. overloading�� �̿��ؼ� default������ ������ ���ִ� ���
	Fraction(const int& num_in = 1, const int& den_in = 1) //constructor �ܺο��� ȣ���Ϸ��� ���� ���� �ƴ�
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

	//Fraction frac; // frac() �����ڿ� parameter�� �ϳ��� ���� �� ��ȣ�� ���� �Ǿ� �ִ�. �Լ��� �򰥸�
	//frac.print();

	Fraction one_thirds{ 1, 3 }; //uniform initializtion�� Ÿ�Ժ�ȯ�� �������� �ʴ´�. �̰� �� �� �����ϴ�.
	Fraction one_thirds2(2.0, 3); // warning�� ������ ������ �ȴ�...? waring�� �ȶߴµ�..
	one_thirds2.print();


	Second sec; //First�� ���� ���������, Second�� ���߿� �������


	return 0;
}