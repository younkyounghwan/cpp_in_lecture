#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int* data = nullptr;
	vector<int> vec_arr;
	vector<int>::iterator it;

public:
	IntArray(vector <int>& arr_in)
		: vec_arr(arr_in)
	{}

	~IntArray()
	{

	}
	void insertBefore(const int var, const int index)
	{
		cout << vec_arr.at(index) << endl;
		// vec_arr.insert(vec_arr.at(index),1, var);
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
		vec_arr.clear();
	}

	void remove(const int arr_in)
	{
		vec_arr.erase(vec_arr.begin(), vec_arr.end());
	}

	void push_back(const int &arr_in)
	{
		vec_arr.push_back(arr_in);
	}

	void print()
	{
		cout << "[";
		for (auto& e : vec_arr)
			cout << e << "|";
		cout << "]" << endl;
	}

};

int main()
{
	std::vector<int> int_vec;
	std::array<int&, 10> int_arr;
	int_vec = { 1,2,3,4,5 };
	IntArray my_arr = int_vec;
	my_arr.insertBefore(10, 1);					//1, 10, 3, 5, 7, 9
	
	my_arr.print();
	my_arr.remove(3);								//1, 10, 3, 7, 9
	my_arr.print();
	my_arr.push_back(13);							//1, 10, 3, 7, 9, 13
	my_arr.print();

	return 0;
}