#include <iostream>

using namespace std;

inline int min(int x, int y)
{
	return x > y ? y : x;
} // inline�Լ��� �Լ��� �ƴ� �� ó�� ����ȴ�.
  // ���򿡴� �����Ϸ��� �˾Ƽ� �ζ����� ���� �� ������ �ζ������� ó���Ѵ�.
  // ����ȭ�� ������ ���谡 �ִ�. �翬�� ���� ��ƴ�.

int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;

	return 0;
}