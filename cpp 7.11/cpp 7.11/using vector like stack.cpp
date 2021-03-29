#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int>& v)
{
	for (auto& e : v)
		cout << e << " ";
	cout << "         ";
}

int main()
{
	// int* v_ptr = new int[3]{ 1,2,3 };

	std::vector<int> v{ 1,2,3 }; // vector에는 위의 주석처럼 코딩하는 것보다 더 많은 기능들을 사용할 수 있다. 
	// 내부적으로 사용되는 new와 delete이 좀 더 적게 사용될 수 있는 방안을 생각하며 코딩을 한다.
	
	// size, capacity

	v.resize(2); //원래 3개였는데 일단은 두대만 쓸래요. 메모리 두개짜리 주세요 라는게 일반적이나
				 // vector는 속도를 우선시 하기 때문에 이와 같은 상황이면 일단 메모리가 원래 2개였던 것처럼 진행을 한다.

	for (auto& e : v)
		cout << e << " ";
	cout << endl; //능청 떠는중

	cout << v.size() << " " << v.capacity() << endl; // size는 2개인데 capacity는 3개네?

	//cout << v[2] << endl; // 말 안들음.

	int *ptr = v.data(); //억지로 가져오기

	cout << ptr[2] << endl;

	cout << endl;






	v.resize(3);
	v.reserve(1024);

	for (unsigned int i = 0; i < v.size(); i++) 
		cout << v[i] << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;
	// size와 capacity는 다르게 사용할 수 있는 구조를 가지고 있다.

	cout << endl;






	std::vector<int> stack; //recursive function을 사용할 때 overflow가 생긴다면 vector를 사용하는 방법이 있다. 

	//stack.reserve(1024); vector는 reserve를 이용해서 capacity를 늘려 놓는 기능이 있어서 속도가 빠르다.

	cout << stack.size() << " " << stack.capacity() << endl;

	stack.push_back(3);
	printStack(stack);
	cout << stack.size() << " " << stack.capacity() << endl;

	stack.push_back(5);
	printStack(stack);
	cout << stack.size() << " " << stack.capacity() << endl;

	stack.push_back(7);
	printStack(stack);
	cout << stack.size() << " " << stack.capacity() << endl;

	stack.pop_back();
	printStack(stack);
	cout << stack.size() << " " << stack.capacity() << endl;

	stack.pop_back();
	printStack(stack);
	cout << stack.size() << " " << stack.capacity() << endl;

	stack.pop_back();
	printStack(stack);
	cout << stack.size() << " " << stack.capacity() << endl;

	return 0;

}