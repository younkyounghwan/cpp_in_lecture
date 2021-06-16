#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource aacquisition is initialization

void doSomething()
{
	try
	{
		//Resource* res = new Resource; // dull pointer // �������� �޸𸮸� �Ҵ�ް� ������, ������ å���� �����ʴ� ������
		AutoPtr<Resource> res(new Resource); // smart pointer
		// res�� �� ��ü�� �������̱� ������ *�� ������� �ʴ´�.
		 
		return; // smart pointer�� ����ϸ� early return�ص� �޸� delete�� �� �̷�� ����.
		// work with res
		if (true) {
			
			throw - 1; // excpetion
		}
		//delete res; // ����Ʈ �����͸� ����ϸ� delete�� ���� �ʾƵ� �ȴ�.
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

		res2 = res1; // copy �Ӹ� �ƴ϶�, delete ������ move�� ���䵵 ������ �ִ�.
		// move semantics
		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;
	
	}

	//syntax vs. semantics ���� vs �ǹ�

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