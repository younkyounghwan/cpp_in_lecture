#include <iostream>
#include <iomanip>

using namespace std;

int main()
{ // set flag
	//cout.setf(ios::showpos);
	//cout << 108 << endl;

	//cout.unsetf(ios::showpos);
	//cout << 109 << endl;

	//cout << endl;

	//cout.unsetf(ios::dec); // 10진수 모드를 꺼주고 16진수를 set해도 된다.
	//cout.setf(ios::hex, ios::basefield);
	//cout << 108 << endl;

	// cout << endl;


	// cout.setf(ios::uppercase);
	//cout << hex << uppercase;
	//cout << 108 << endl;
	//cout << 109 << endl;

	//cout << dec;
	//cout << 110 << endl;

	//cout << endl;

	//cout << defaultfloat;
	//cout << fixed;
	//cout << scientific << uppercase;
	//cout << showpoint;
	
	//cout << setprecision(3) << 123.456 << endl;
	//cout << setprecision(4) << 123.456 << endl;
	//cout << setprecision(5) << 123.456 << endl;
	//cout << setprecision(6) << 123.456 << endl;
	//cout << setprecision(7) << 123.456 << endl;

	//cout << endl;

	cout << -12345 << endl;
	cout.fill('*');
	cout << setw(10) << -12345 << endl; //set width
	cout << setw(10) << left << -12345 << endl;
	cout << setw(10) << right << -12345 << endl;
	cout << setw(10) << internal << -12345 << endl;

	return 0;
}