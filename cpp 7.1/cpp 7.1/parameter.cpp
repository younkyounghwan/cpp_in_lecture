// 매개변수와 실인자의 구분
// parameter, actual parameter
#include <iostream>

using namespace std;

// 매개변수(parameter)는 함수가 어떤 기능을 하는지 조절해주고
// 바꿔준다.

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y;
} //x and y destroyed at here 
// os에 의해서 메모리가 삭제됨.

int main()
{
	int x = 1, y = 2;

	foo(6, 7); // 6, 7 : arguments (actual parameters) 실인자
	foo(x, y);



	return 0;
}