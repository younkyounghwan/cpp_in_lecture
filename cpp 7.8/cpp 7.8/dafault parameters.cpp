#include <iostream>
#include <string>
using namespace std;

void print(int x) {}
void print(int x, int y = 20) {}

void print2(std::string std) {}
void print2(char ch = ' ') {}

void print1(int x, int y, int z = 1); //header file�� �Լ��� �����Ѵٸ� ����ο� ���Ǻ� �� �� �ϳ����� default���� �־�� �Ѵ�.
// ���� ����ο� default���� �ִ´�.
void print1(int x, int y, int z = 1) //default parameter
{
	cout << x << " " << y << " " << z << endl;
}

int main()
{

	print1(10,1);
	print1(1,2,3);

	print2(); //default���� ������ charŸ������ �����ε��� ��

	//print(10); ambiguous call


	return 0;
}