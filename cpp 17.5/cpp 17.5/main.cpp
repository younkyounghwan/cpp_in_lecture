#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("one");
	string str2("two");

	// str2 = str1;
	// str2 = "two";
	// str2.assign("two").append(" ").append("three");

	cout << str1 << " " << str2 << endl;
	swap(str1, str2);
	cout << str1 << " " << str2 << endl;
	str1.swap(str2);
	cout << str1 << " " << str2 << endl;

	cout << endl;

	string str("aaaa");

	str.insert(2, "bbb"); // 2번째 자리부터 insert

	cout << str << endl;

	return 0;
}