#include <iostream>

using namespace std;

int main()
{
	int value = 5;
	const int* ptr = &value; 
	// *ptr = 6;
	// value = 6; 

	int value2 = 8;
	ptr = &value2; // const�� value�� ����� �ΰ� reference���� 
	//���ϰ� �� �� �ִ�.

	cout << value << endl;
	cout << *ptr << endl;

	int val = 5;
	int* const ptr1 = &val;

	*ptr1 = 10;

	int val2 = 6;

	//ptr1 = &val2; const�� ���� �տ� ���� �ּҰ��� �ٲ� �� ����.
	cout << *ptr << endl;

	int num = 5;
	const int* const ptr4 = &num;

	cout << num << endl; 


	/*
	int value = 5;
	const int *ptr1 = &value;		 // �ּҴ� �ٲ� �� �־��
	int *const ptr2 = &value;		 // ���� �ٲ� �� �־��
	const int *const ptr3 =  &value; // ���� �ٲ��� ���� �ּҵ� �ٲ��� ������.
	
	*/

	return 0;
}