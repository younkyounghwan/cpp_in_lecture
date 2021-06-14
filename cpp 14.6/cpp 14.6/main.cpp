#include <iostream>
#include <memory>

using namespace std;

class A
{ // try catch는 굉장히 느리다. 반복문 안에다 넣어서 프로그램을 느리게 만들지 말자. 최적화를 헤치지 말자
public:
	~A()
	{ // 소멸자에서는 throw하는 것이 금기시 되어있다.
		throw "error";
	}
};

int main()
{
	try
	{
		int* i = new int[1000000];
		unique_ptr<int> up_i(i); // scope를 벗어나면 알아서 memory를 지워준다. 굉장히 편하다 ㅎㅎ

		// do something with i
		throw "error";

		delete[] i;

		A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}