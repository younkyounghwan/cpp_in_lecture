#include <iostream>
//#include <array>
#include <vector>
using namespace std;
//동적 메모리 할당 업그래이드편
int main()
{
	//int* my_arr = new int[5];
	
	// array<int,5> array;
	vector<int> array; // vector는 memory leak 위험이 없다.
	// 알아서 memory를 
	//delete시키기 때문이다.
	vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	vector<int> array3 = { 1,2,3 };

	cout << array3.size() << endl;

	vector<int> array4 { 1,2,3 };

	cout << array4.size() << endl;
	
	vector<int> arr{ 1,2,3,4,5 };

	arr.resize(10);

	for (auto& itr : arr) //iterator
		cout << itr << " ";
	cout << endl;

	cout << arr.size() << endl;
	cout << arr[1] << endl;
	cout << arr.at(1) << endl; //array와 동일
	
	//delete[] my_arr;

	return 0;
}