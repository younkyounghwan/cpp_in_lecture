#include <iostream>
#include <cstddef>
#include <string>
#include <locale>

using namespace std;

int main()
{
	//c-style string example
	{
		char* strHello = new char[7];
		strcpy_s(strHello, sizeof(char) * 7, "Hello");
		std::cout << strHello << std::endl;
	}

	//basic_string<>, string, wstring
	{
		std::string string;
		std::wstring wstring;

		wchar_t wc; // wide-character/unicode
	}

	const std::wstring texts[] =
	{
		L"æ»≥Á«œººø‰?"
	};

	std::locale::global(std::locale(""));
	std::wcout.imbue(std::locale());

	for (size_t i = 0; i < 12; ++i)
		std::wcout << texts[i] << std::endl;

	return 0;
}