#include <iostream>

using namespace std;

void doSomething(int &n)
{
	n = 10;
	cout << "In doSomething " << n << endl;
	cout << &n << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	int value = 5;

	
	int* ptr = nullptr;
	ptr = &value;
	

	int& ref = value; // 참조

	ref = 10; //*ptr = 10;

	const int y = 8;
	const int &ref1 = y;

	cout << ref << " " << value << endl;

	cout << &value << endl;
	cout << &ref << endl; // 주소도 같다.
	cout << ptr << endl;
	cout << &ptr << endl; // 포인터변수도 변수다. 


	int n = 5;

	cout << n << endl;

	cout << &n << endl;

	doSomething(n);

	cout << n << endl;

	/*
	Other ot;
	ot.st.v1 = 1;
	*/

	Other ot;

	int& v1 = ot.st.v1;
	v1 = 1;

	int value3 = 5;
	int* const ptr3 = &value3;
	int& ref3 = value3;

	*ptr3 = 10;
	//ref3 = 10;
	cout << value3 << " " << *ptr3 << endl;

	return 0;

}