#include <iostream>

using namespace std;

inline int min(int x, int y)
{
	return x > y ? y : x;
} // inline함수는 함수가 아닌 것 처럼 실행된다.
  // 요즘에는 컴파일러가 알아서 인라인이 빠를 거 같으면 인라인으로 처리한다.
  // 최적화랑 밀접한 관계가 있다. 당연히 정말 어렵다.

int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;

	return 0;
}