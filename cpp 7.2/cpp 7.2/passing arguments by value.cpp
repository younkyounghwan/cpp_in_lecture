#include <iostream>

using namespace std;

void doSomething(int y) //y�� ����ǰ� ������ ���� ����ȴ�.
{
	cout << "In func " << y << " " << &y << endl;
} // main���� ����� x�� doSomething�� y�� �� �ּҰ� �ٸ���.

int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main " << x << " " <<&x << endl;

	doSomething(x);
	doSomething(x + 1);

	return 0;
}