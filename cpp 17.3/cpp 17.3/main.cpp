#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_str("0123456789"); // string에는 null이 포함되어있지 않다. 
	// string은 class 이기 때문에 길이 자체의 variable을 가지고 있다.

	my_str.reserve(1000);

	cout << boolalpha;
	cout << my_str.size() << endl;
	cout << my_str.length() << endl;
	cout << my_str.capacity() << endl; // vector나 마찬가지로 memory reallocation을 피하기 위해 memory를 넉넉하게 잡는다.
	cout << my_str.max_size() << endl;

	cout << my_str.empty() << endl;

	return 0;
}