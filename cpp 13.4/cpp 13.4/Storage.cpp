#include "Storage.h"

// 해더에 정의부를 넣던가 cpp파일을 include 하던가 해더를 쪼개서 쓰던가

template <>
void Storage<double>::print()
{
	std::cout << "Double Type ";
	std::cout << std::scientific << m_value << std::endl;
}