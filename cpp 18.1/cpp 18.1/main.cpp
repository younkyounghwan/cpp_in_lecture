#include <iostream>
#include <string>
#include <iomanip> //input/ouput manipulators
using namespace std;

int main()
{
	//char buf1[5];

	//cin >> setw(5) >> buf1;
	//cout << buf1 << endl;

	//cin >> setw(5) >> buf1;
	//cout << buf1 << endl;

	//cin >> setw(5) >> buf1;
	//cout << buf1 << endl;

	//cout << endl;

	
	//int i;
	//float f;

	//cin >> i >> f;
	//cout << i << " " << f << endl;

	//char ch;

	//while (cin >> ch)
	//	cout << ch; // ��ĭ�� ���õ�

	//while (cin.get(ch))
	//	cout << ch; // ��ĭ�� �����


	//cout << endl;


	//char buf1[100];

	//cin.getline(buf1, 100); // getline�� ����ϸ� �����ٺ��� ���۸� �б� �����Ѵ�.
	//cout << cin.gcount() << " " << buf1 << endl;

	//cin.getline(buf1, 5);
	//cout << cin.gcount() << " " << buf1 << endl;

	//cout << endl;

	//string buf2;

	//getline(cin, buf2);
	//cout << cin.gcount() << " " << buf2 << endl;

	//cout << endl;

	char buf[1024];

	cout << (char)cin.peek() << endl; // buffer���� �������� �ʰ� �鿩�ٺ��� ����

	cin.ignore(); // n��° ���� ����

	cin >> buf;
	cout << buf << endl;

	cin.unget(); // �������� ���� ���� �ٽ� buffer�� �־����
	//cin.putback('A'); // ���ϴ� ���ڸ� buffer�� �־����

	cin >> buf;
	cout << buf << endl;

	return 0;
}