#include <iostream>

using namespace std;

int main()
{
	int value = 5;
	const int* ptr = &value; 
	// *ptr = 6;
	// value = 6; 

	int value2 = 8;
	ptr = &value2; // const는 value를 상수로 두고 reference값은 
	//변하게 할 수 있다.

	cout << value << endl;
	cout << *ptr << endl;

	int val = 5;
	int* const ptr1 = &val;

	*ptr1 = 10;

	int val2 = 6;

	//ptr1 = &val2; const를 변수 앞에 쓰면 주소값을 바꿀 수 없다.
	cout << *ptr << endl;

	int num = 5;
	const int* const ptr4 = &num;

	cout << num << endl; 


	/*
	int value = 5;
	const int *ptr1 = &value;		 // 주소는 바꿀 수 있어요
	int *const ptr2 = &value;		 // 값은 바꿀 수 있어요
	const int *const ptr3 =  &value; // 값도 바꾸지 말고 주소도 바꾸지 마세요.
	
	*/

	return 0;
}