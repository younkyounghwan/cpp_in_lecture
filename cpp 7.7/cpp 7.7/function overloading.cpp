#include <iostream>
#include <string>

using namespace std;

typedef int my_int;

void print1(int x) {}
void print1(my_int) {}
//���� Ÿ������ �ν�

//void print(char* value) {}
//void print(int value) {}
void print(unsigned int value) {}
void print(float value) {}



int add(int x, int y)
{
	return x + y;

}

double add(double x, double y)
{
	return x + y;
}
// �Լ� �����ε��� ����ҋ� ����Ÿ���� ������ ������ �߰�, �Ű������� �޶������ �Լ� �����ε��� ����� �� �ִ�.


void getRandomValue(double &x)
{

}


void getRandomValue(int &x)
{

}

int main()
{
	print((unsigned int)'a');
	print(0u);
	print(3.141592f);


	cout << add(1, 2) << endl;
	cout << add(3.5, 4.8) << endl;
	// �Լ� �����ε��� ������ �� �� �Լ��� �����ϴµ� �־� ������ �� �� �� �� �־�� �Ѵ�.

	return 0;
}