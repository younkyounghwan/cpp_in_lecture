#include <iostream>
#include <vector>
#include <utility> // std::forward

using namespace std;

struct MyStruct
{};

void func(MyStruct& s)
{
	cout << "Pass by L-ref" << endl;
}

void func(MyStruct&& s)
{
	cout << "Pass by R-ref";
};

//void func(MyStruct s)
//{
//   cout << "Pass by value" << endl;
//}


template<typename T>
void func_wrapper(T&& t) // perfect fowarding
{
	func(forward<T>(t));
}

int main()
{
	MyStruct s;

	func_wrapper(s);
	func_wrapper(MyStruct());


	//func(s);
	//func(MyStruct());

	return 0;
}