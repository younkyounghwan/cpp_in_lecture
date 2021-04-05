#include <iostream>

using namespace std;


class Student
{
private:
	int		m_id;
	string	m_name;

public:
	Student(const string& name_in)
	//	: m_id(0), m_name(name_in)		// 비추천		유지보수에 상당한 어려움이 있음.
	//	: Student(0,name_in)			// 추천			위임 생성자
	{
		init(0, name_in);
	} 

	Student(const int& id_in, const string& name_in)
	//	: m_id(id_in), m_name(name_in)
	{
		init(id_in, name_in);
	} //생성자가 생성자를 가져다쓸 수 있다.

	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}

};
int main()
{
	Student st1(0, "Jack jack");
	st1.print();

	Student st2("Dash");
	st2.print();

	return 0;

}