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
	{
		set<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello"); // 집합의 개념이므로 중복은 삭제한다. size = 2

		cout << str_set.size() << endl;

		for (auto& e : str_set)
			cout << e << " ";
		cout << endl;
	}

	//multiset : duplication is allowed
	{
		std::multiset<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World"); 
		str_set.insert("Hello"); // 중복 허용

		cout << str_set.size() << endl;

		for (auto& e : str_set)
			cout << e << " ";
		cout << endl;
	}

	//map : key/value (json)
	{
		std::map<char, int> map;
		map['a'] = 10;
		map['b'] = 20;
		map['c'] = 50;

		cout << map['a'] << endl;

		map['a'] = 100;

		cout << map['a'] << endl;

		for (auto& e : map)
			cout << e.first << " : " << e.second << " "; // char/int      key/value
		cout << endl;
	}

	// multimap : duplicated keys
	{
		std::multimap<char, int> map;
		map.insert(std::pair/* <char, int> */('a', 10)); // Before c++ 14, pair<char, int>('a', 10)
		map.insert(std::pair('b', 10));
		map.insert(std::pair('c', 10));
		map.insert(std::pair('a', 100));

		cout << map.count('a') << endl; // key에 대한 value를 세줌

		for (auto& e : map)
			cout << e.first << " " << e.second << " ";
		cout << endl;
			
	}
}

void container_adapters()
{
	// stack
	{ // filo
		cout << "Stack" << endl;

		std::stack<int> stack;
		stack.push(1);  // push adds a copy
		stack.emplace(2);  //  emplace constructs a new object
		stack.emplace(3);
		cout << stack.top() << endl;
		stack.pop();
		cout << stack.top() << endl;
	}

	//queue
	{ // fifo
		cout << "Queue" << endl;

		std::queue<int> queue;
		queue.push(1);
		queue.push(2);
		queue.push(3);

		cout << queue.front() << " " << queue.back() << endl;
		queue.pop();
		cout << queue.front() << " " << queue.back() << endl;
	}

	// Priority queue
	{
		cout << "Priority queue" << endl;

		cout << "Priority queue" << endl;

	std:priority_queue<int> queue;

		for (const int n : {1, 8, 5, 6, 3, 4, 0, 7, 2})
			queue.push(n);

		for (int i = 0; i < 10; ++i)
		{
			cout << queue.top() << endl;
			queue.pop();
		}
	}
}

int main()
{
	sequence_containers();

	associative_containers();

	container_adapters();

	return 0;
}