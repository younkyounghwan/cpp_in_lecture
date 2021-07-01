#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void sequence_containers()
{
	// vector
	{
		vector<int> vec; // #include <vector>
		for (int i = 0; i < 10; i++)
			vec.push_back(i);

		for (auto& e : vec)
			cout << e << " ";
		cout << endl;
	}

	//deque
	{
		deque<int> deq;
		for (int i = 0; i < 10; ++i)
		{
			deq.push_back(i);
			deq.push_front(i);
		}

		for (auto&e : deq)
			cout << e << endl;
		cout << endl;

	}
}

void associative_containers()
{

}

int main()
{
	sequence_containers();

	associative_containers();

	container_adapters();

	return 0;
}