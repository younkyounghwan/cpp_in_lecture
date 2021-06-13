#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException : public exception
{
public:
	const char* what() const noexcept override // ���� Ŭ������ exception�� �ڽ� Ŭ������ ���� ���ؼ� what()�Լ��� overriding���ش�.
	{ // Not to throw any exception
		return "Custom exception";
	}
};

int main()
{
	try
	{
		/*string s;
		s.resize(-1);*/

		//throw runtime_error("Bad thing happened");
		throw CustomException();
	}
	//catch (length_error& exception) // �ڽ� Ŭ������ �ޱ�
	//{
	//	cerr << "Length_Error" << endl;
	//	cerr << exception.what() << endl;
	//}
	catch (exception& exception)
	{
		cout << typeid(exception).name() << endl; // �ڽ� Ŭ������ �����ش�
		cerr << exception.what() << endl;
	}

	return 0;
}