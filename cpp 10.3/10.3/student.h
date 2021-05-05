#pragma once
#include <iostream>
#include <string>

class Student
{
private:
	string m_name;
	int m_intel; // intelligence;

	//ToDo: add more members like address, phone, favorate food, habits, ...
public:
	Student(const string& name_in = "No Name", const int& intel_in = 0)
		: m_name(name_in), m_intel(intel_in)
	{}
	void setName(const string& name_in)
	{
		m_name = name_in;

	}

	void setIntel(int intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}


	friend ostream& operator << (ostream& out, const Student& student)
	{
		out << student.m_name << " " << student.m_intel;
		return out;
	}
};