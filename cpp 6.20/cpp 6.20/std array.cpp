#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printlength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
	//my_arr[1] = 9;
}

int main()
{
	//int array[] = { 1,2,3,4,5 };

	array<int, 5> my_arr = { 1,2,3,4,5 };
	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2 };

	//cout << my_arr[10] << endl;
	//cout << my_arr.at(10) << endl; // 예외처리

	cout << my_arr.size() << endl;

	printlength(my_arr);
	cout << my_arr[1] << endl;

	array<int, 5> ur_arr = { 3,4,2,5,1 };

	for (auto& element : ur_arr)
		cout << element << " ";
	cout << endl;
	
	sort(ur_arr.rbegin(), ur_arr.rend()); // 역순

	for (auto &element : ur_arr)
		cout << element << " ";
	cout << endl;

	
	return 0;

}