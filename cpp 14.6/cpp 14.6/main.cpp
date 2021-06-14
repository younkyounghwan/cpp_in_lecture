#include <iostream>
#include <memory>

using namespace std;

class A
{ // try catch�� ������ ������. �ݺ��� �ȿ��� �־ ���α׷��� ������ ������ ����. ����ȭ�� ��ġ�� ����
public:
	~A()
	{ // �Ҹ��ڿ����� throw�ϴ� ���� �ݱ�� �Ǿ��ִ�.
		throw "error";
	}
};

int main()
{
	try
	{
		int* i = new int[1000000];
		unique_ptr<int> up_i(i); // scope�� ����� �˾Ƽ� memory�� �����ش�. ������ ���ϴ� ����

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