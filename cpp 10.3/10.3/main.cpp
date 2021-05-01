// 집합관계

#include <iostream>
#include <vector>
#include <string>
#include "lecture.h"

using namespace std;

int main()
{

	Student *std1 = new Student("Jack jack", 0);
	Student *std2 = new Student("Dash", 1);
	Student *std3 = new Student("Violet", 2);

	Teacher *tech1 = new Teacher("Prof. Hong");
	Teacher *tech2 = new Teacher("Prof. Good");

	//composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(tech1);
	lec1.registerStudent(std1);
	lec1.registerStudent(std2);
	lec1.registerStudent(std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(tech2);
	lec2.registerStudent(std1);

	//ToDo: implement Aggregation Relationship

	//Test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}

	//ToDo: class HobbyClub

	//ToDo: delete memory (if necessery)

	delete std1;
	delete std2;
	delete std3;

	delete tech1;
	delete tech2;


	return 0;
}