#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string student_name;
	int intel;

public:
	Student(string name_in, int intel_in = 0)
		:student_name(name_in), intel(intel_in)
	{}

	friend ostream& operator << (ostream& out, const Student stu)
	{
		out << stu.student_name << " " << stu.intel << endl;
		return out;
	}

};