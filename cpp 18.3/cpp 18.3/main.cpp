#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	stringstream os1;

	os1 << "Hello world" << endl; // << : insertion operator, >> : extraction operator
	// os.str("Hello, world"); // ���ƾ���
	os1 << "Hello world2\n"; // �����̱�

	string str;

	//os >> str;
	cout << os1.str();

	cout << str << endl;

	cout << endl;




	stringstream os;

	

	int i = 12345;
	double d = 67.89;
	
	os << i << d;

	//os << "12345 67.89"; // os�� ���ڿ��� �Ҵ��ص� ���� ����.

	// os.str(""); // reset
	//clear(); // what is clear() to do?


	//string str1;
	//string str2;

	//os >> str1 >> str2;

	int i2; 
	double d2;

	os >> i2 >> d2;
	
	cout << i2 << "|" << d2 << endl;
		

	return 0;
}