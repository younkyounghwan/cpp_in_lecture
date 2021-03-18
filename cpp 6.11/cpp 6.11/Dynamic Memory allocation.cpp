#include <iostream>
//static, auto, dynamic 
using namespace std;

int main()
{
	//int array[10000000]; // stack은 용량이 작아요. hip은 용량이 커요.


	//int var;
	//var = 7;

	int* ptr = new (std::nothrow) int{ 7 }; //예외처리
	int* ptr2 = ptr;
	
	if (ptr) {
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
		cout << "could not allocated memory" << endl;

	delete ptr; // 할당받은 메모리를 os에게 돌려준다.
	ptr = nullptr;
	

	cout << "After delete" << endl;
	if (ptr) {
		cout << ptr << endl;
		cout << *ptr << endl;
	}

	//memory leak
	/*
	while (true) {
		int* ptr0 = new int;
		cout << ptr0 << endl;

		delete ptr;
	}
	*/


	return 0;
}