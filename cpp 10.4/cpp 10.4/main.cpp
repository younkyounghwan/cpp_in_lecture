#include <iostream>
#include <vector>
using namespace std;


class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors;

public:
	Patient(string name_in)
		: m_name(name_in)
	{}

};

class Doctor
{
private:
	string m_name;

public:
	Doctor(string name_in)
		: m_name(name_in)
	{}
};
int main()
{
	Patient* p1 = new Patient("Jack Jack");
	return 0;
}