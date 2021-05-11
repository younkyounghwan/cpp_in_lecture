#include <iostream>

class Mother
{
public:
	int m_i;
};

class Child : public Mother
{
public:
		Child()
	{
		this->m_i = 10;
		Mother::m_i;
	}
};

int main()
{

}