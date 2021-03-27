#include <iostream>
#include <array>
#include <tuple>
using namespace std;


int *getValue(int x)
{
	int val = x * 2;
	return &val;
}

int& getValue2(int x)
{
	int val = x * 2;
	return val;
} //return by reference

int* allocateMemory(int size)
{
	return new int[size];
}

int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

struct S
{
	int a, b, c, d;
};

S getStruct()
{
	S my_s{ 1,2,3,4 };
	return my_s;
}

std::tuple<int, double> getTuple() //����� ���� �ڷ���
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);
}


int main()
{
	int x = 3;
	
	int value = *getValue(x); // �������� ����. ����� ������ de-referencing�ϴ°� ������ �� ���� ����.
	int* value1 = getValue(x); // �� �������� ����. ������ ������µ�, �ּҰ��� ��� �ִ°� ������ ��.
	
	cout << value << " " << value1 <<  endl;

	int* array = allocateMemory(1024);

	delete[] array;

	cout << endl;    

	int &value2 = getValue2(5);

	cout << value2 << endl; // 1�������θ� ���ϰ��� ������ �ִٰ� 
	cout << value2 << endl; // ���Ŀ� �ٽ� ���� ȣ���ϸ� �����Ⱚ�� ��µȴ�. 

	std::array<int, 100> my_array; // �޸𸮸� �����ϰ� ��Ƴ��� reference�� �̿��ؼ� �������� ������ Ȱ��.
	my_array[30] = 10;

	get(my_array, 30) = 1024;

	cout << my_array[30] << endl;

	cout << endl;

	S my_s = getStruct();
	my_s.a;

	//std::tuple<int, double> my_tp = getTuple();
	//cout << std::get<0>(my_tp) << endl;; // a
	//cout << std::get<1>(my_tp) << endl;; // d

	auto[a, d] = getTuple();
	cout << a << endl;
	cout << d << endl; // cpp 17����



	return 0;

}