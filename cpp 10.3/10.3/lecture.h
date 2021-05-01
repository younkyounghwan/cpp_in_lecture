#pragma once
#include <vector>
#include "student.h"
#include "teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher *teacher;
	std::vector<Student*> students;

	//Teacher *teacher;
	//std::vector<Student*> students;

public:
	Lecture(const std::string& name_in)
		:m_name(name_in)
	{}

	~Lecture()
	{
		// Do not delete teacher
		// Do not delete students
	}

	//void assignTeacher(const Teacher& const teacher_input)
	//{
	//	teacher = teacher_input;
	//}

	
	void assignTeacher(Teacher* const teacher_input)
	{
		teacher = teacher_input;
	}
	

	//void registerStudent(const Student& const student_input)
	//{
	//	students.push_back(student_input);

	//	// &student_input != &students[0];
	//}

	
	void registerStudent(Student* const student_input)
	{
		students.push_back(student_input);
	}
	

	void study()
	{
		std::cout << m_name << " study " << std::endl << std::endl;

		//for (auto& element : students) //Note : 'auto element' doesn't works
		//	element.setIntel(element.getIntel() + 1);

		for (auto element : students)
			(*element).setIntel((*element).getIntel() + 1);
		/*for (auto element : students)
			element->setIntel(element->getIntel() + 1);*/
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& Lecture)
	{
		out << "Lecture name : " << Lecture.m_name << std::endl;

		out << Lecture.teacher << std::endl;
		for (auto element : Lecture.students)
			out << *element << std::endl;

		/*
		out << *Lecture.teacher << std::endl;
		for (auto element : Lecture.students)
			out << *element << endl;
		*/

		return out;

	}
};