#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int* data = nullptr;
	

public:
	IntArray(int &length_in)
		: m_length(length_in)
	{}

	~IntArray()
	{

	}

	void initialize(const int &length_in, int& data_in)
	{
		m_length = length_in;
		data = &data_in;
	}

	void reset()
	{
		m_length = 0;
		data = nullptr;
	}


};

int main()
{
	std::vector<int> int_vec;
	std::array<int, 10> int_arr;

	//IntArray my_arr{ 1,3,5,7,9 };               
	//my_arr.insertBefore(10, 1);					//1, 10, 3, 5, 7, 9
	//my_arr.remove(3);								//1, 10, 3, 7, 9
	//my_arr.push_back(13);							//1, 10, 3, 7, 9, 13


	return 0;
}