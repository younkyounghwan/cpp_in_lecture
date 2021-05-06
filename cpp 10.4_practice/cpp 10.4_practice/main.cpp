#include <iostream>
#include <vector>
using namespace std;

class Doctor
{
private:
	string m_name;
	vector <Patient> chat;

public:
	Doctor(string name_in)
		:m_name(name_in)
	{}

	void assignPatient(Patient& patient)
	{
		chat.push_back(patient);
	}

	friend ostream& operator << (ostream& out, const Doctor doctor)
	{
		out << doctor.m_name << " ";
		for (auto& e : doctor.chat)
			out << e << " ";
		out << endl;
	}

};

class Patient
{
private:
	string m_name;
	vector <Doctor> list;

public:
	Patient(string name_in)
		:m_name(name_in)
	{}

	friend ostream& operator << (ostream& out, const Patient patient)
	{
		out << patient.m_name << " ";
		for (auto& e : patient.list)
			out << e << " ";
		out << endl;
	}
};

int main()
{
	//Doctor* d1 = new Doctor("dr. johnson");

	//Patient* p1 = new Patient("mike");
	//Patient* p2 = new Patient("thomas");
	Doctor d1("mike");

	Patient p1("dr. johnson");
	d1.assignPatient(d1);

	return 0;
}