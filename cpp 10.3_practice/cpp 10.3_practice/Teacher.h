#pragma once
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
	string teacher_name ;

public:
	Teacher(string name_in = "No name")
		:teacher_name(name_in)
	{}

	void setName(string name_in)
	{
		teacher_name = name_in;
	}

	friend ostream& operator << (ostream& out, const Teacher tec)
	{
		out << tec.teacher_name;
		return out;
	}

};