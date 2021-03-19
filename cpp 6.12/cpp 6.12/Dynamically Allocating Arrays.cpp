#include <iostream>

using namespace std;

int main()
{
	int length;

	// const int length = 5;

	//int array[length];

	cin >> length;

	int* array = new int[length] {11,22,33,44,55};

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; i++) {
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	


	int fixedArray[] = { 1,2,3,4,5 };

	int* array = new int[5]{ 1,2,3,4,5 };

	// resizing



	delete[] array;

	return 0;

}