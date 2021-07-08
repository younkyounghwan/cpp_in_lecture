#include <iostream>
#include <string>
#include <vector>
#include <sstream> // string stream

using namespace std;

template <typename T>
string Tostring(T x)
{
	ostringstream osstream; // output string stream

	osstream << x;
	return osstream.str();
}

template <typename T>
bool FromString(const string& str, T& x)
{
	istringstream isstream(str);

	return (isstream >> x) ? true : false;

}

int main()
{
	string my_str(Tostring(3.141592));
	string my_str2("Hello");

	double d;

	if (FromString(my_str, d))
		cout << d << endl;
	else
		cout << "Cannot convert string to double" << endl;

	if (FromString(my_str2, d))
		cout << d << endl;
	else
		cout << "Cannot convert string to double" << endl;


	//string my_string("my string");
	const char* my_string = "my string";

	vector <char> vec;

	for (auto e : "Today is a good day. ")
		vec.push_back(e);

	
	// string ���̺귯�� ���

	string second_string(vec.begin(), find(vec.begin(), vec.end(), 'g'));

	// string second_string(my_string, 3); // 2��° ���ڿ����� ���

	// string second_string(my_string, 3, 5); // 3��° ���� 5���� ���ڿ��� �����´�

	// string second_string(10, 'A'); // A 10�� ���

	cout << second_string << endl;

	string my_str1(to_string(3.141592)); // to_string�� ����Ͽ� ������ ���ڿ��� �ٲ�

	// my_str += to_string(12);

	// int i = stoi(my_str); // stoi : string to intiger // stof : string to float

	cout << my_str1 << endl;
	// cout << i << endl;

	cout << my_str1 << endl;

	return 0;
}