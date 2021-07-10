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
	//	cout << ch; // 빈칸이 무시됨

	//while (cin.get(ch))
	//	cout << ch; // 빈칸이 고려됨


	//cout << endl;


	//char buf1[100];

	//cin.getline(buf1, 100); // getline을 사용하면 다음줄부터 버퍼를 읽기 시작한다.
	//cout << cin.gcount() << " " << buf1 << endl;

	//cin.getline(buf1, 5);
	//cout << cin.gcount() << " " << buf1 << endl;

	//cout << endl;

	//string buf2;

	//getline(cin, buf2);
	//cout << cin.gcount() << " " << buf2 << endl;

	//cout << endl;

	char buf[1024];

	cout << (char)cin.peek() << endl; // buffer에서 꺼내지는 않고 들여다보는 정도

	cin.ignore(); // n번째 까지 무시

	cin >> buf;
	cout << buf << endl;

	cin.unget(); // 마지막에 읽은 것을 다시 buffer에 넣어버림
	//cin.putback('A'); // 원하는 문자를 buffer에 넣어버림

	cin >> buf;
	cout << buf << endl;

	return 0;
}