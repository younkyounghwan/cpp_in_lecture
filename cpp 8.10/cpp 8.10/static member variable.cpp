#include <iostream>

using namespace std;

class Something
{
public:
	static const int s_value = 1; // static member는 initialize 할 수 없다.
	// static constexpr int s_value = 1; // 다음과 같은 경우 declare시 반드시 initailize 같이 해줘야한다.
}; // 싱글턴..?

// int Something::s_value = 1; // define in cpp. because it is static varialbe. - 중복선언

int main()
{
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	// st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl;

	cout << &st2.s_value << " " << st2.s_value << endl;

	// Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;  //정적 메모리가 할당 되어있기 때문에 주소값이 동일하다.


	return 0;
}