#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// memory를 가진다 -> L-value
// memory를 가지지 못한다. -> R-value

void doSomething(int& lref)
{
	cout << "L-value ref" << endl;
}

void doSomething(int &&ref)
{
	cout << "R-value ref" << endl;
}

int getResult()
{
	return 100 * 100;
}

int main()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();
	
	// L-value references

	int& lr1 = x;         // Modifiable l-values
	//int &lr2 = cx;      // Non-modifiable l-values
	//int &lr3 = 5;       // R-values

	const int& lr4 = x;   // Modifiable l-values
	const int& lr5 = cx;  // Non-modifiable l-vlaues
	const int& lr6 = 5;   // R-values // symbolic const 느낌으로 사용

	// R-value references 

	//int &&rr1 = x;      // Modifiable l-values
	//int &&rr2 = cx;     // Non-modifiable l-values
	int&& rr3 = 5;        // R-values 

	//const int &&rr4 = x;  // Modifiable l-values
	//const int &&rr5 = cx; // Non-modifiable l-values
	const int&& rr6 = 5;    // R-values

	// L/R-value reference parameters
	doSomething(x);
	// doSomething(cx);
	doSomething(5);
	doSomething(getResult());

	return 0;
}