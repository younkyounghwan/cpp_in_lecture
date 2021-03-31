#include <iostream>
#include <cassert>
#include <array>

// 딱 짤라 말하다. 단언하다.
// release 모드에서는 assert가 작동을 하지 않는다.
using namespace std;

void printValue(const std::array<int, 5> my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1); //웬만해서 &&쓰지 말고 쪼개서 하는걸 권장

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


	static_assert(x == 5, "x should be 5"); //compile time이 결정되는 경우에만 사용이 가능하다.


	return 0;
}