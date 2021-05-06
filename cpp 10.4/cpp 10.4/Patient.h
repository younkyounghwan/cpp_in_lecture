#pragma once
#include <string>
#include <vector>
#include <iostream>

class Patient
{
private:
	std::string m_name;
	std::vector<Doctor*> m_doctors;
	std::vector<Patient*> m_patients;

public:
	Patient(std::string name_in)
		: m_name(name_in)
	{}

	void addDoctor(Doctor* new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}
	void meetDoctors()
	{
		for (auto& e : m_doctors)
		{
			std::cout << "Meet doctor : " << e->m_name << std::endl;
		}
	}

	friend class Doctor;
};