#include <iostream>
// 동적 메모리 할당
using namespace std;                  // stack
int g_i = 0;						  //				
									  // int second
int second(int x)					  // int first
{									  // int main
	return 2 * x;					  // int g_i
}									  //
									  // stack의 단점: 	
int first(int x)					  // stack overflow가 생길 가능성이 있다.
{
	int y = 3;
	return second(x + y);
}

int main()
{ //os는 항상 main부터 시작함. 

	int a = 1, b;
	b = first(a);
	cout << b << endl;


	return 0;
}