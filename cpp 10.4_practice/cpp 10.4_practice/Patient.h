#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Doctor.h"

class Patient
{
private:
	string Patient_name;
	vector <Doctor> vec_Doctor;

public:
	Patient(string& name_in)
		:Patient_name(name_in)
	{}
};