#include <iostream>
// ���� �޸� �Ҵ�
using namespace std;                  // stack
int g_i = 0;						  //				
									  // int second
int second(int x)					  // int first
{									  // int main
	return 2 * x;					  // int g_i
}									  //
									  // stack�� ����: 	
int first(int x)					  // stack overflow�� ���� ���ɼ��� �ִ�.
{
	int y = 3;
	return second(x + y);
}

int main()
{ //os�� �׻� main���� ������. 

	int a = 1, b;
	b = first(a);
	cout << b << endl;


	return 0;
}