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
	{ // arr에 값을 넣어줌
		m_list[index] = value;
	}

	int getItem(int index)
	{ // arr에 index를 return함
		return m_list[index];
	}

	int* getList()
	{ // list를 포인터화해서 반환함 -> 좀더 직관적으로 바꿈
		return m_list;
	}
	*/

	//첨자 연산자 사용

	int& operator [] (const int index)
	{
		assert(index >= 0); // 방어적 프로그래밍
		assert(index < 10);
		return m_list[index];
	}

	const int& operator [] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list[index];
	} //const로 묶인 변수를 다룰때는 같이 const로 설정해 줘서 오류를 막는다.
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