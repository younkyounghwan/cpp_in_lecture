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
	Student(string name_in = "No name", int intel_in = 0)
		:student_name(name_in), intel(intel_in)
	{}

	friend ostream& operator << (ostream& out, const Student stu)
	{
		out << stu.student_name << " " << stu.intel << endl;
		return out;
	}	
	void set_name(string& name_in)
	{
		student_name = name_in;
	}

	void set_intel(int intel_in)
	{
		intel = intel_in;
	}

	int get_intel()
	{
		return intel;
	}
};