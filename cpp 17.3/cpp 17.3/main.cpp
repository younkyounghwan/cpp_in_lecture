#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_str("0123456789"); // string���� null�� ���ԵǾ����� �ʴ�. 
	// string�� class �̱� ������ ���� ��ü�� variable�� ������ �ִ�.

	my_str.reserve(1000);

	cout << boolalpha;
	cout << my_str.size() << endl;
	cout << my_str.length() << endl;
	cout << my_str.capacity() << endl; // vector�� ���������� memory reallocation�� ���ϱ� ���� memory�� �˳��ϰ� ��´�.
	cout << my_str.max_size() << endl;

	cout << my_str.empty() << endl;

	return 0;
}