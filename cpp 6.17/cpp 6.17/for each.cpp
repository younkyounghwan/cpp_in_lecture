#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	// int fibonacci[] = { 0,1,2,3,5,8,13,21,34,55,89 };

	// 동적할당을 굉장히 편하게 해줌
	vector<int> fibonacci = { 0,1,2,3,5,8,13,21,34,55,89 };


	// change array values
	for (auto& number : fibonacci)
		number *= 10;

	// output
	for (const auto& number : fibonacci)
		cout << number << " ";
	cout << endl;

	int max_number = numeric_limits<int>::lowest();

	for (const auto& n : fibonacci)
		max_number = max(max_number, n);

	cout << max_number << endl;

	return 0;
}