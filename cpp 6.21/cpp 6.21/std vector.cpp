#include <iostream>
//#include <array>
#include <vector>
using namespace std;
//���� �޸� �Ҵ� ���׷��̵���
int main()
{
	//int* my_arr = new int[5];
	
	// array<int,5> array;
	vector<int> array; // vector�� memory leak ������ ����.
	// �˾Ƽ� memory�� 
	//delete��Ű�� �����̴�.
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
	cout << arr.at(1) << endl; //array�� ����
	
	//delete[] my_arr;

	return 0;
}