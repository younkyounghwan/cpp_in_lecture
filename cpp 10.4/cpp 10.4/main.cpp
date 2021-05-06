#include "Doctor.h"
#include "Patient.h"

using namespace std;


int main()
{
	Patient* p1 = new Patient("Jack Jack");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("violet");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	// patients meet doctors
	p1->meetDoctors();

	//doctors meet patients
	d1->meetPatients();

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;
		
	return 0;
}