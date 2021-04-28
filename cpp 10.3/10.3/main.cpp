// 집합관계

#include <iostream>
#include <vector>
#include <string>
#include "lecture.h"


using namespace std;


int main()
{
	//composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(Teacher("prof. Hong"));
	lec1.registerStudent(Student("Jack jack", 0));
	lec1.registerStudent(Student("Dash", 1));
	lec1.registerStudent(Student("Violet", 2));

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(Teacher("prof. Good"));
	lec2.registerStudent(Student("Jack jack", 0));

	//ToDo: implement Aggregation Relationship

	//Test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}


	return 0;
}