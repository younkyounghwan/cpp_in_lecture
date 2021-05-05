#include "Lecture.h"

int main()
{

	Teacher tec1("prof.");
	Student stu1("John");
	Student stu2("Sam", 2);
	Student stu3("Tomas", 3);


	Lecture lec1("Internet");
	lec1.assign_Student(stu1);
	lec1.assign_Student(stu2);
	lec1.assign_Student(stu3);

	cout << lec1 << endl;
	return 0;
}