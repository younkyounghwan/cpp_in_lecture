#include <iostream>
#include <string>
#include <iomanip> //input/ouput manipulators
using namespace std;

int main()
{
	char buf[5];

	cin >> setw(5) >> buf;
	cout << buf << endl;

	cin >> setw(5) >> buf;
	cout << buf << endl;

	cin >> setw(5) >> buf;
	cout << buf << endl;

	cout << endl;

	
	int i;
	float f;

	cin >> i >> f;
	cout << i << " " << f << endl;

	char ch;

	while (cin >> ch)
		cout << ch; // ��ĭ�� ���õ�

	while (cin.get(ch))
		cout << ch; // ��ĭ�� �����


	return 0;
}