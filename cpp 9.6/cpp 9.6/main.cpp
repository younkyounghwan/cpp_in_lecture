#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private:
	int m_list[10] = { 1,2,3,4,5,6,7,8,9 };

public:


	/*
	void setItem(int index, int value)
	{ // arr�� ���� �־���
		m_list[index] = value;
	}

	int getItem(int index)
	{ // arr�� index�� return��
		return m_list[index];
	}

	int* getList()
	{ // list�� ������ȭ�ؼ� ��ȯ�� -> ���� ���������� �ٲ�
		return m_list;
	}
	*/

	//÷�� ������ ���

	int& operator [] (const int index)
	{
		assert(index >= 0); // ����� ���α׷���
		assert(index < 10);
		return m_list[index];
	}

	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	} //const�� ���� ������ �ٷ궧�� ���� const�� ������ �༭ ������ ���´�.
};

int main()
{

	/*
	IntList my_list;
	my_list.setItem(3, 1);
	cout << my_list.getItem(3) << endl;

	my_list.getList()[3] = 10;
	cout << my_list.getList()[3] << endl;
	*/

	const IntList my_list;
	//my_list[3] = 10;
	cout << my_list[3] << endl;

	IntList* list = new IntList;

	
	(*list)[3] = 10; //OK
	//list[3] = 10; // NOT OK 
	//list[3] = IntList; // ???

	return 0;
}