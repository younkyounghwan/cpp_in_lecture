#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;
	if (count > 0)
		countDown(count - 1); //recursive
}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int fibo(int num)
{
	if (num <= 0)
		return 0;
	else if (num <= 1)
		return 1;
	else
		return fibo(num - 1) + fibo(num - 2);
}

int main()
{
	countDown(5);

	cout << sumTo(10) << endl;

	
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << fibo(i) << endl;
	}

	return 0;
}
