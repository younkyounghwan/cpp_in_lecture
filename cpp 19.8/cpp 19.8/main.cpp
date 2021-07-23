#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Examples
{
public:

	void ex1()
	{
		vector<int> vect;
		for (vector<int>::iterator itr = vect.begin(); itr != vect.end(); ++itr)
			cout << *itr;

		for (auto itr = vect.begin(); itr != vect.end(); itr++)
			cout << *itr;

		for (auto itr : vect) // for (const auto & itr : vect)
			cout << itr;
	}

	void ex2()
	{
		int x = int();

		auto auto_x = x;

		const int& crx = x;

		auto auto_crx1 = crx; // const를 때버림

		const auto& auto_crx2 = crx;
		
		volatile int vx = 1024;

		auto avx = vx;

		volatile auto vx = 1024;
	}

	template<class T>
	void func_ex3(T arg)
	{

	}

	//template<class T>
	//void func_ex3(const T arg)
	//{

	//}

	void ex3()
	{
		const int& crx = 123;

		func_ex3(crx);
	}
	void ex10()
	{

	}
	void ex12()
	{

	}
	void ex14()
	{

	}
	void ex15()
	{

	}
	void ex16()
	{

	}
};

int main()
{
	Examples examples;

	examples.ex1();
	examples.ex2();
	examples.ex3();
	examples.ex10();
	examples.ex12();
	examples.ex14();
	examples.ex15();
	examples.ex16();
	

	return 0;
}