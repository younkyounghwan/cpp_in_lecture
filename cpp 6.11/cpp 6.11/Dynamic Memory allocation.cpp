#include <iostream>
//static, auto, dynamic 
using namespace std;

int main()
{
	//int array[10000000]; // stack�� �뷮�� �۾ƿ�. hip�� �뷮�� Ŀ��.


	//int var;
	//var = 7;

	int* ptr = new (std::nothrow) int{ 7 }; //����ó��
	int* ptr2 = ptr;
	
	if (ptr) {
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
		cout << "could not allocated memory" << endl;

	delete ptr; // �Ҵ���� �޸𸮸� os���� �����ش�.
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