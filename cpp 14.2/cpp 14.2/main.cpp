#include <iostream>

using namespace std;

// void last() throw(int) exception specifier
// void last() throw(...) exception specifier
 
void last() throw(...) //예외를 throw할 가능성이 있는 함수다 // parameter를 넣지 않으면 예외를 throw하지 않겠다는 뜻이 된다. 주의
{
	cout << "last " << endl;
	cout << "Throws exception" << endl;

	throw 'a';
	
	cout << "End last " << endl;
}

void third()
{
	cout << "Third" << endl;

	last();

	cout << "End third" << endl;
}

void second()
{
	cout << "Second" << endl;

	try
	{
		third();
	}
	catch (double)
	{
		cerr << "Second caught double exception" << endl;
	}

	cout << "End second " << endl;
}

void first()
{
	cout << "first" << endl;

	try
	{
		second();
	}
	catch (int)
	{
		cerr << "first caught int exception" << endl;
	}

	cout << "End first" << endl;

}

int main()
{
	cout << "Start" << endl;

	try
	{
		first();
	}
	catch (int)
	{
		
		cerr << "main caught int exception" << endl;
	}

	// uncaught exceptions

	catch (...) // catch-all handlers
	{
		cerr << "main caught ellipses exception" << endl;
	}

	cout << "End main" << endl;


	return 0;
}