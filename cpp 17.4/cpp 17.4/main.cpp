#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string my_str("abcdefg");

	char buf[20];

	my_str.copy(buf, 5, 1);

	buf[5] = '\0';

	cout << my_str.c_str() << endl;

	const char* arr = my_str.c_str();

	// cout << arr << endl;
	cout << (int)arr[6] << endl;
	cout << (int)arr[7] << endl;

	cout << my_str[0] << endl;
	cout << my_str[3] << endl;
	
	my_str[3] = 'z';
	
	try {
		// my_str[100] = 'x'; // for performance
		my_str.at(100) = 'x'; // for stablity
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}





	
	return 0;
}