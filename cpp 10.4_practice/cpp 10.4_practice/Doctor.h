#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Patient.h"

class Doctor
{
private:
	string Doctor_name;
	vector <Patient> vec_Patient;

public:
	Doctor(string& name_in)
		:Doctor_name(name_in)
	{}
};