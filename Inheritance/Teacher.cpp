#include "Teacher.h"
#include "Employee.h"

void Teacher::PrepareLesson() {
	std::cout << name << " is preparing " << subject << " lesson." << std::endl;
}

Teacher::Teacher(std::string name, std::string company, int age, std::string subject)
	: Employee(name, company, age) {

	this->subject = subject;
}
