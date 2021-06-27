#include <iostream>
#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

int main()
{
	{
		AutoPtr<Resource> res1(new Resource(10000000));

		cout << res1.m_ptr << endl;

		AutoPtr<Resource> res2 = std::move(res1);

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

	}

	return 0;
} 