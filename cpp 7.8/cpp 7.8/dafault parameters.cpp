#include <iostream>
#include <string>
using namespace std;

void print(int x) {}
void print(int x, int y = 20) {}

void print2(std::string std) {}
void print2(char ch = ' ') {}

void print1(int x, int y, int z = 1); //header file에 함수를 선언한다면 선언부와 정의부 둘 중 하나에만 default값을 넣어야 한다.
// 보통 선언부에 default값을 넣는다.
void print1(int x, int y, int z = 1) //default parameter
{
	cout << x << " " << y << " " << z << endl;
}

int main()
{

	print1(10,1);
	print1(1,2,3);

	print2(); //default값이 설정된 char타입으로 오버로딩이 됨

	//print(10); ambiguous call


	return 0;
}