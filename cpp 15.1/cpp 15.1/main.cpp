#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource aacquisition is initialization

void doSomething()
{
	try
	{
		//Resource* res = new Resource; // dull pointer // 동적으로 메모리를 할당받고 있지만, 끝까지 책임을 지지않는 포인터
		AutoPtr<Resource> res(new Resource); // smart pointer
		// res는 그 자체로 포인터이기 때문에 *를 사용하지 않는다.
		 
		return; // smart pointer를 사용하면 early return해도 메모리 delete이 잘 이루어 진다.
		// work with res
		if (true) {
			
			throw - 1; // excpetion
		}
		//delete res; // 스마트 포인터를 사용하면 delete을 쓰지 않아도 된다.
	}
	catch (...)
	{
	}

	return;
}

int main()
{
	doSomething();

	{
		AutoPtr<Resource> res1(new Resource); // int i, int *ptr1(&i); int *ptr2 = nullptr;
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1; // copy 뿐만 아니라, delete 이후의 move의 개념도 가지고 있다.
		// move semantics
		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	
	}

	//syntax vs. semantics 문법 vs 의미

	int x = 1, y = 1;
	x + y;

	string str1("Hello"), str2("World");
	str1 + str2; // append

	// doSomething(res1);
	
	// value semantics (copy semantics)
	// reference semantics (pointer)
	// move semantics (move)
	return 0;
}