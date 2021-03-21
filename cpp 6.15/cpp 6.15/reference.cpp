#include <iostream>

using namespace std;

void doSomething(const int &x)
{
	cout << x << endl;
}

int main()
{
	int x = 5;
	int& ref_x = x;

	const int& ref_2 = ref_x;

	cout << ref_2 << endl;

	const int& ref_y = 3 + 4;

	cout << ref_y << endl;
	cout << &ref_y << endl;

	doSomething(3);
	doSomething(x + 3);

	return 0;
}