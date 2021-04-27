#pragma once
#include <vector>
#include "student.h"
#include "teacher.h"

class Lecture
{
	std::string m_name;

	Teacher teacher;
	std::vector<Student> students;

	//Teacher *teacher;
	//std::vector<Student*> students;

public:
	Lecture(const std::string& name_in)
		:m_name(name_in)
	{}

	~Lecture()
	{

	}

	void assignTeacher(const Teacher& const teacher_input)
	{
		teacher = teacher_input;
	}

	void registerStudent(const Student& const student_input)
	{
		students.push_back(student_input);
	}

	void study()
	{
		std::cout << m_name << " study " << std::endl << std::endl;

		for (auto& elemet : students)
			element.setIntel(element.getIntel() + 1);
	}

	friend std::ostream& operator << std::ostream& out, const Lecture& Lecture)
	{
	out << "Lecture name : " << lecture.m_name << std::endl;
	return out;

	}
};