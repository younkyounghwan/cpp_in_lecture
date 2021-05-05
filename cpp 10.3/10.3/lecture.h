#pragma once
#include <vector>
#include "student.h"
#include "teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher *teacher;
	vector<Student*> students;

	//Teacher *teacher;
	//vector<Student*> students;
	0
public:
	Lecture(const string& name_in = "No name")
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
		cout << m_name << " study " << endl << endl;

		//for (auto& element : students) //Note : 'auto element' doesn't works
		//	element.setIntel(element.getIntel() + 1);

		for (auto element : students)
			(*element).setIntel((*element).getIntel() + 1);
		/*for (auto element : students)
			element->setIntel(element->getIntel() + 1);*/
	}

	friend ostream& operator << (ostream& out, const Lecture& Lecture)
	{
		out << "Lecture name : " << Lecture.m_name << endl;

		out << Lecture.teacher << endl;
		for (auto element : Lecture.students)
			out << *element << endl;

		/*
		out << *Lecture.teacher << std::endl;
		for (auto element : Lecture.students)
			out << *element << endl;
		*/

		return out;

	}
};