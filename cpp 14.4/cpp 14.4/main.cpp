#include <iostream>
#include <exception>
#include <string>

using namespace std;

class CustomException : public exception
{
public:
	const char* what() const noexcept override // 다음 클래스를 exception의 자식 클래스로 쓰기 위해서 what()함수를 overriding해준다.
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
	//catch (length_error& exception) // 자식 클래스로 받기
	//{
	//	cerr << "Length_Error" << endl;
	//	cerr << exception.what() << endl;
	//}
	catch (exception& exception)
	{
		cout << typeid(exception).name() << endl; // 자식 클래스를 보여준다
		cerr << exception.what() << endl;
	}

	return 0;
}