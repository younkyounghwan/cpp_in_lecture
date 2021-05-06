#pragma once
#include <string>
#include <vector>
#include <iostream>

class Doctor
{
private:
	std::string m_name;
	std::vector<Patient*> m_patients;


public:
	Doctor(std::string name_in)
		: m_name(name_in)
	{}

	void addPatient(Patient* new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatients()
	{
		for (auto& e : m_patients)
		{
			std::cout << "Meet patient : " << e->m_name << std::endl;
		}
	}


	friend class Patient;
};