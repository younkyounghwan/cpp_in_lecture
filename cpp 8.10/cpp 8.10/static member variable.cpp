#include <iostream>

using namespace std;

class Something
{
public:
	static const int s_value = 1; // static member�� initialize �� �� ����.
	// static constexpr int s_value = 1; // ������ ���� ��� declare�� �ݵ�� initailize ���� ������Ѵ�.
}; // �̱���..?

// int Something::s_value = 1; // define in cpp. because it is static varialbe. - �ߺ�����

int main()
{
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	// st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl;

	cout << &st2.s_value << " " << st2.s_value << endl;

	// Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;  //���� �޸𸮰� �Ҵ� �Ǿ��ֱ� ������ �ּҰ��� �����ϴ�.


	return 0;
}