#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:

	Cents(int cents = 0) 
	{ 
		m_cents = cents;
	}

	int getCents() const
	{ 
		return m_cents; 
	}

	int& getCents() 
	{
		return m_cents;
	}

	/*friend Cents operator + (const Cents& c1, const Cents& c2) 
	{
		return Cents(c1.getCents() + c2.getCents());
	}*/
	// =. []. (), ->�� �̷� ���·θ� �����ε��� �����ϴ�
	Cents operator + (const Cents& c2)
	{
		return Cents(this->m_cents + c2.m_cents);
	}

};




int main()
{
	Cents cents1(6);
	Cents cents2(8);

	// Cents sum;
	// add(cents1, cents2, sum);

	// cout << add(cents1, cents2).getCents() << endl;

	cout << (cents1 + cents2 + Cents(6)).getCents() << endl;

	// int i = 6, j = 8; cout << i + j << endl;

	// ?: :: sizeof . .*  ������ �����ε��� �ȵǴ� �����ڵ�

	return 0;
}