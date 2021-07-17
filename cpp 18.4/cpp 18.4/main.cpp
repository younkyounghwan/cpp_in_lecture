#include <iostream>
#include <cctype>
#include <string>
#include <bitset>

using namespace std;

void printCharacterClassification(const int& i)
{
	cout << boolalpha;
	cout << "isalnum " << bool(isalnum(i)) << endl;
	cout << "isblank " << bool(isblank(i)) << endl;
	cout << "isdigit " << bool(isdigit(i)) << endl;
	cout << "islower " << bool(islower(i)) << endl;
	cout << "isupper " << bool(isupper(i)) << endl;

}
void printStates(const ios& stream)
{
	cout << boolalpha;
	cout << "good()=" << stream.good() << endl;
	cout << "eof()=" << stream.eof() << endl;
	cout << "fail()=" << stream.fail() << endl;
	cout << "bad()=" << stream.bad() << endl;
}



bool isAllDigit(const string& str)
{
	bool ok_flag = true;

	for (auto e : str) 
		if (!isdigit(e))
		{
			ok_flag = false;
			break;
		}

	return ok_flag;
}

void classifycharacters(const string& str)
{
	for (auto e : str)
	{
		cout << endl;
		cout << "isdigit " << isdigit(e) << endl;
		cout << "isblank " << isblank(e) << endl;
		cout << "isalpha " << isalpha(e) << endl;

	}
}

int main()
{
	//while(true)
	//{
	//	int i;
	//	cin >> i;
	//
	//	printStates(cin);

	//	//cout << boolalpha;
	//	//cout << bitset<8>(cin.rdstate()) << endl;
	//	//cout << bitset<8>(istream::goodbit) << endl;
	//	//cout << bitset<8>(istream::failbit) << endl;
	//	//cout << !bool((cin.rdstate() & istream::failbit) != 0) << endl; // bitmask Àçº¹½À
	//	//cin.rdstate() == istream::goodbit;

	//	printCharacterClassification(i);

	//	cin.clear();
	//	cin.ignore(1024, '\n');
	//	cout << endl;

	//}

	cout << boolalpha;
	classifycharacters("1234");
	classifycharacters("a 1234");


	//regular expression

	return 0;
}