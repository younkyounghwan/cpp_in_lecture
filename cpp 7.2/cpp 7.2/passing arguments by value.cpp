#include <iostream>

using namespace std;

void doSomething(int y) //y가 선언되고 인자의 값이 복사된다.
{
	cout << "In func " << y << " " << &y << endl;
} // main에서 선언된 x와 doSomething의 y는 그 주소가 다르다.

int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main " << x << " " <<&x << endl;

	doSomething(x);
	doSomething(x + 1);

	return 0;
}