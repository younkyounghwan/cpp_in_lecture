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

	std::vector<int> v{ 1,2,3 }; // vector���� ���� �ּ�ó�� �ڵ��ϴ� �ͺ��� �� ���� ��ɵ��� ����� �� �ִ�. 
	// ���������� ���Ǵ� new�� delete�� �� �� ���� ���� �� �ִ� ����� �����ϸ� �ڵ��� �Ѵ�.
	
	// size, capacity

	v.resize(2); //���� 3�����µ� �ϴ��� �δ븸 ������. �޸� �ΰ�¥�� �ּ��� ��°� �Ϲ����̳�
				 // vector�� �ӵ��� �켱�� �ϱ� ������ �̿� ���� ��Ȳ�̸� �ϴ� �޸𸮰� ���� 2������ ��ó�� ������ �Ѵ�.

	for (auto& e : v)
		cout << e << " ";
	cout << endl; //��û ������

	cout << v.size() << " " << v.capacity() << endl; // size�� 2���ε� capacity�� 3����?

	//cout << v[2] << endl; // �� �ȵ���.

	int *ptr = v.data(); //������ ��������

	cout << ptr[2] << endl;

	cout << endl;






	v.resize(3);
	v.reserve(1024);

	for (unsigned int i = 0; i < v.size(); i++) 
		cout << v[i] << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;
	// size�� capacity�� �ٸ��� ����� �� �ִ� ������ ������ �ִ�.

	cout << endl;






	std::vector<int> stack; //recursive function�� ����� �� overflow�� ����ٸ� vector�� ����ϴ� ����� �ִ�. 

	//stack.reserve(1024); vector�� reserve�� �̿��ؼ� capacity�� �÷� ���� ����� �־ �ӵ��� ������.

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