#pragma once
#include <iostream>
#include <string>

class Teacher
{
private:
	string m_name;
	//ToDo: more members like home address, salary, age, evaluation, etc.

public:
	Teacher(const string& name_in = "No Name")
		:m_name(name_in)
	{}

	void setName(const string& name_in)
	{
		m_name = name_in;
	}

	string getName()
	{
		return m_name;
	}

	friend ostream& operator << (ostream& out, const Teacher& teacher)
	{
		out << teacher.m_name;
		return out;
	}
};