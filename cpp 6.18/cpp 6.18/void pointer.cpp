#include <iostream>

using namespace std;

//void pointer, generic pointer

enum Type
{
	INT,
	FLOAT,
	CHAR
};

int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	ptr = &c; // type오류 없음. 대신 type을 알 방법은 없음.

	Type type = FLOAT;

	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;
	else if (type == INT)
		cout << *static_cast<int*>(ptr) << endl;

	cout << &f << " " << ptr << endl;
	cout << *static_cast<float*>(ptr) << endl;



	return 0;
}