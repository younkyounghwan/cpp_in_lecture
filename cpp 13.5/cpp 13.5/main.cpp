#include <iostream>
#include <array>
#include "Storage8.h"

using namespace std;

template<typename T>
class A
{
public:
	A(const T& input)
	{}


	void doSomething()
	{
		cout << typeid(T).name() << endl;
	}

	void test()
	{}
};

template<>
class A<char>
{
public:
	A(const char& temp) 
	{}

	void doSomething()
	{
		cout << "Char type specialization" << endl;
	}
};


int main()
{
	A <int> a_int(1); 
	A <double> a_double(3.14);
	A <char> a_char('A');


	A a_int(1); // <>를 이용해서 타입을 정해주지 않아도 된다. (c++17에서만 가능)
	A a_double(3.14);
	A a_char('A');

	a_int.test();
	a_double.test();
	// a_char.test(); 이건 안됨

	a_int.doSomething();
	a_double.doSomething();
	a_char.doSomething();


	// define a Storage8 gor integers
	Storage8<int> intStorage;
	for (int count = 0; count < 8; ++count)
		intStorage.set(count, count);

	for (int count = 0; count < 8; ++count)
		cout << intStorage.get(count) << endl;

	cout << "Sizeof Storage8<int> " << sizeof(Storage8<int>) << endl;


	return 0;
}