// �Ű������� �������� ����
// parameter, actual parameter
#include <iostream>

using namespace std;

// �Ű�����(parameter)�� �Լ��� � ����� �ϴ��� �������ְ�
// �ٲ��ش�.

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y;
} //x and y destroyed at here 
// os�� ���ؼ� �޸𸮰� ������.

int main()
{
	int x = 1, y = 2;

	foo(6, 7); // 6, 7 : arguments (actual parameters) ������
	foo(x, y);



	return 0;
}