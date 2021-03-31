#include <iostream>
#include <cassert>
#include <array>

// �� ©�� ���ϴ�. �ܾ��ϴ�.
// release ��忡���� assert�� �۵��� ���� �ʴ´�.
using namespace std;

void printValue(const std::array<int, 5> my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1); //�����ؼ� &&���� ���� �ɰ��� �ϴ°� ����

	cout << my_array[ix] << endl;
}


int main()
{
	const int number = 5;


	// number should be 5
	assert(number == 5);

	cout << endl;

	std::array<int, 5> my_array{ 1,2,3,4,5 };
	
	//printValue(my_array, 100);

	cout << endl;

	const int x = 5;

	assert(x == 5);


	static_assert(x == 5, "x should be 5"); //compile time�� �����Ǵ� ��쿡�� ����� �����ϴ�.


	return 0;
}