#include <iostream>

using namespace std;

int main()
{
	// try, catch, throw
	double x;
	cin >> x;

	try
	{ // 예외처리에서는 형변환이 엄격하다.
		if (x < 0.0) throw string("Nagative input"); 

		cout << sqrt(x) << endl;
	}

	// http://tcpschool.com/cpp/cpp_exception_intro

	/*
	try
	{
		throw - 1;
	}
	*/

	catch (int x)
	{
		cout << "Catch integer " << x << endl;
	}

	catch (double x)
	{
		cout << "Catch double " << x << endl;
	}

	catch (string error_message)
	{ // catch로 오버로딩이 가능하다
		// do something to respond
		cout << error_message << endl;
	}


	return 0;
}