#include <iostream>
#include <string>

using namespace std;

typedef int my_int;

void print1(int x) {}
void print1(my_int) {}
//같은 타입으로 인식

//void print(char* value) {}
//void print(int value) {}
void print(unsigned int value) {}
void print(float value) {}



int add(int x, int y)
{
	return x + y;

}

double add(double x, double y)
{
	return x + y;
}
// 함수 오버로딩을 사용할떄 리턴타입이 같으면 에러가 뜨고, 매개변수가 달라야지만 함수 오버로딩을 사용할 수 있다.


void getRandomValue(double &x)
{

}


void getRandomValue(int &x)
{

}

int main()
{
	print((unsigned int)'a');
	print(0u);
	print(3.141592f);


	cout << add(1, 2) << endl;
	cout << add(3.5, 4.8) << endl;
	// 함수 오버로딩을 실행할 때 두 함수를 구분하는데 있어 컴파일 할 때 알 수 있어야 한다.

	return 0;
}