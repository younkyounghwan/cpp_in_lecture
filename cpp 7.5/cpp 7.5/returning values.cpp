#include <iostream>
#include <array>
#include <tuple>
using namespace std;


int *getValue(int x)
{
	int val = x * 2;
	return &val;
}

int& getValue2(int x)
{
	int val = x * 2;
	return val;
} //return by reference

int* allocateMemory(int size)
{
	return new int[size];
}

int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

struct S
{
	int a, b, c, d;
};

S getStruct()
{
	S my_s{ 1,2,3,4 };
	return my_s;
}

std::tuple<int, double> getTuple() //사용자 정의 자료형
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}


int main()
{
	int x = 3;
	
	int value = *getValue(x); // 권장하지 않음. 사라질 변수를 de-referencing하는게 문제가 될 수도 있음.
	int* value1 = getValue(x); // 더 권장하지 않음. 변수가 사라졌는데, 주소값만 들고 있는게 문제가 됨.
	
	cout << value << " " << value1 <<  endl;

	int* array = allocateMemory(1024);

	delete[] array;

	cout << endl;    

	int &value2 = getValue2(5);

	cout << value2 << endl; // 1차적으로만 리턴값을 가지고 있다가 
	cout << value2 << endl; // 추후에 다시 값을 호출하면 쓰레기값이 출력된다. 

	std::array<int, 100> my_array; // 메모리만 안전하게 잡아놓고 reference를 이용해서 여러가지 변수를 활용.
	my_array[30] = 10;

	get(my_array, 30) = 1024;

	cout << my_array[30] << endl;

	cout << endl;

	S my_s = getStruct();
	my_s.a;

	//std::tuple<int, double> my_tp = getTuple();
	//cout << std::get<0>(my_tp) << endl;; // a
	//cout << std::get<1>(my_tp) << endl;; // d

	auto[a, d] = getTuple();
	cout << a << endl;
	cout << d << endl; // cpp 17기준



	return 0;

}