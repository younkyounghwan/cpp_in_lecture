#include <iostream>

using namespace std;

class Accumulator
{
private:
	int m_counter = 0;

public:
	int operator()(int i) {
		return (m_counter += i); //parameter인 i를 더하고 m_counter의 값을 리턴
	}

};

int main()
{
	Accumulator acc;
	cout << acc(10) << endl;	
	cout << acc(20) << endl;


	return 0;
}