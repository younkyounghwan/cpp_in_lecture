#include "MyArray.h"

template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

// explicit instanciation
 template void MyArray<double>::print();
 template void MyArray<char>::print();

// template class MyArray<double>;
// template class MyArray<char>; 