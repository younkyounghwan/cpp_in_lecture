#include "Storage.h"

// �ش��� ���Ǻθ� �ִ��� cpp������ include �ϴ��� �ش��� �ɰ��� ������

template <>
void Storage<double>::print()
{
	std::cout << "Double Type ";
	std::cout << std::scientific << m_value << std::endl;
}