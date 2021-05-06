#pragma once
#include "Student.h"
#include "Teacher.h"
#include <vector>

class Lecture
{
private:
	string lec_name;
	Teacher tec;
	vector <Student> vec_stu;
public:
	Lecture(string name_in)
		:lec_name(name_in)
	{}

	void assgin_Teacher(Teacher& tec_in)
	{
		tec = tec_in;
	}

	void assign_Student(Student& stu_in)
	{
		vec_stu.push_back(stu_in);
	}

	friend ostream& operator << (ostream & out, const Lecture& lec)
	{
		out << lec.lec_name << " " << lec.tec << endl;
		for (auto& e : lec.vec_stu)
			out << e;
		out << endl;
		return out;
	}

	friend ostream& operator == (ostream& out, const Lecture& lec)
	{

	}

	void study()
	{
		for (auto& e : vec_stu)
		{
			e.set_intel(e.get_intel() + 1);
		}
	}

};