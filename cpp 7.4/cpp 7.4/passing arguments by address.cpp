#include <iostream>

using namespace std;

typedef int* pint;

void foo (int* ptr)
{
	cout << "In func: " << *ptr << " " << ptr << " " << &ptr << endl;

	*ptr = 10;
} //포인터 변수도 변수다
  //주소값도 copy initializtion 된다.

void func(double degrees, double* sin_out, double* cos_out)
{
	*sin_out = 1.0;
	*cos_out = 2.0;
}

void func2(int *ptr, int* arr, int length)
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << endl;

	arr[0] = 1.0; //array는 []가 de-reference이다.

	*ptr = 1.0;

	int x = 1;

	ptr = &x;

}



int main()
{
	int value = 5;

	int* ptr = &value;

	cout << "In main: " << value << " " << &value << " " << &ptr << endl;



	foo(ptr);
	foo(&value);
	//foo(5);


	cout << endl;
	 
	double degrees = 30;
	double sin, cos;

	func(degrees, &sin, &cos);

	cout << sin << " " << cos << endl;


	return 0;
}

