#include <iostream>
#include <string>
#include <iomanip> //input/ouput manipulators
using namespace std;

int main()
{
	char buf1[5];

	cin >> setw(5) >> buf1;
	cout << buf1 << endl;

	cin >> setw(5) >> buf1;
	cout << buf1 << endl;

	cin >> setw(5) >> buf1;
	cout << buf1 << endl;

	cout << endl;

	
	int i;
	float f;

	cin >> i >> f;
	cout << i << " " << f << endl;

	char ch;

	while (cin >> ch)
		cout << ch; // ºóÄ­ÀÌ ¹«½ÃµÊ

	while (cin.get(ch))
		cout << ch; // ºóÄ­ÀÌ °í·ÁµÊ


	cout << endl;


	char buf[5];

	cin.get(buf, 5);
	cout << cin.gcount()<< " " << buf << endl;

	cin.get(buf, 5);
	cout << buf << endl;


	return 0;
}