#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource aacquisition is initialization

void doSomething()
{
	try
	{
		Resource* res = new Resource;

		// work with res
		if (true) {
			
			throw - 1; // excpetion
		}
		delete res; // 스마트 포인터를 사용하면 delete을 쓰지 않아도 된다.
	}
	catch (...)
	{
	}

	return;
}

int main()
{
	doSomething();

	/*{
		AutoPtr<Resource> res1(new Resoure);
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	
	}*/
	return 0;
}