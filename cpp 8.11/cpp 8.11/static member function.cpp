#include <iostream>

using namespace std;

class Something
{
private:
	static int s_value;

public:
	static int getValue()
	{
		return s_value;
	}
};

int Something::s_value = 1024;

int main()
{
	cout << Something::getValue() << endl;

	Something s1;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;


	return 0;
}