// std::Initializer_list
// 솔직히 이거 이해 잘 안된다 왜 쓰는지도 잘 모르겠고
#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;


class IntArray
{
private:
	unsigned m_length = 0;
	int* m_data = nullptr;

public:
	IntArray(unsigned length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	IntArray(const std::initializer_list<int>& list)
		:IntArray(list.size())
	{
		int count = 0;
		for (auto& e : list)
		{
			m_data[count] = e;
			++count;
		}
		//for (unsigned count = 0; count < list.size(); ++count)
		//	m_data[count] = list[count]; // initialzer list는 대괄호 []를 지원하지 않음.
	}
	~IntArray()
	{
		delete[] this->m_data;
	}

	//TODO: overload operator =

	friend ostream& operator <<(ostream& out, IntArray& arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			cout << arr.m_data[i] << " ";
		out << endl;
		return out;
	}
};

int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int* my_arr2 = new int[5]{ 1,2,3,4,5 }; // 대체 동적할당이라는 게 뭔지 아직도 이해를 못하겠다. 대체 무슨 장점이 있는건지
	
	auto il = { 10,20,30 }; // 이것의 정체는 뭘까 이니셜라이저 리스트 아쩌구 하던데 왜 쓰는거지 이걸?

	IntArray int_array { 1,2,3,4,5,6,7,8,9,10 }; // 
	cout << int_array << endl;

	return 0;
}