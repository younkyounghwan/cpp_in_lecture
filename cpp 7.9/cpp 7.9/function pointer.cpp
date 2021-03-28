#include <iostream>
#include <array>
#include <functional>
// 함수도 포인터가 있다!!!! 기능을 사용하는데에도 매개변수를 넣을 수 있다!!!! 너무 어렵다!!!!!!
using namespace std;

int func(int x)
{
	return 7;
}

int func1()
{
	return 5;
}

int goo() 
{
	return 10;
}



bool isEven(const int& number) 
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2!= 0) return true;
	else return false;
}

//typedef bool(*check_fcn_t)(const int&); //너무 어려운댕.... 

using check_fcn_t = bool(*)(const int&); //이렇게도 쓴다.

void printNumbers(const array<int, 10>& my_arr, check_fcn_t check_fcn) // check_fcn_t 대신 std::function<bool(const int&)>를 넣어도 가능. line - 56
{
	for (auto element : my_arr)
	{
		if (check_fcn(element) == true) cout << element << " ";
		// if (!print_even && element % 2 == 1) cout << element << " ";
	}
	cout << endl;
}

int main()
{
	

	std::array<int, 10> my_arr = { 0,1,2,3,4,5,6,7,8,9 };

	std::function<bool(const int&)> fcnptr = isEven;

	printNumbers(my_arr, isEven);
	printNumbers(my_arr, isOdd);

	int (*funcptr)(int) = func;

	cout << funcptr(1) << endl;

	int (*fcnptr1)() = func1; //매개변수와 리턴 타입을 맞춰줘야 사용할 수 있다. 

	cout << fcnptr1() << endl;

	fcnptr1 = goo;
	cout << fcnptr1() << endl;

	func1();
	cout << func1 << endl; // 함수도 주소를 가지고 있다.
}