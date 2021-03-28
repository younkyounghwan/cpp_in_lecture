#include <iostream>
#include <array>
#include <functional>
// �Լ��� �����Ͱ� �ִ�!!!! ����� ����ϴµ����� �Ű������� ���� �� �ִ�!!!! �ʹ� ��ƴ�!!!!!!
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

//typedef bool(*check_fcn_t)(const int&); //�ʹ� ������.... 

using check_fcn_t = bool(*)(const int&); //�̷��Ե� ����.

void printNumbers(const array<int, 10>& my_arr, check_fcn_t check_fcn) // check_fcn_t ��� std::function<bool(const int&)>�� �־ ����. line - 56
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

	int (*fcnptr1)() = func1; //�Ű������� ���� Ÿ���� ������� ����� �� �ִ�. 

	cout << fcnptr1() << endl;

	fcnptr1 = goo;
	cout << fcnptr1() << endl;

	func1();
	cout << func1 << endl; // �Լ��� �ּҸ� ������ �ִ�.
}