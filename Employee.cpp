#include "Employee.h"

Employee::Employee() {
	this->me = "";
	this->company = "";
	this->age = NULL;
}

Employee::Employee(std::string name = "Chuck", std::string company = "Kung Fu Kompany", int age = 67) {
	this->me = name;
	this->company = company;
	this->age = age;
}

void Employee::IntroduceYourself() {
	std::cout << "Name - " << me << std::endl;
	std::cout << "Company - " << company << std::endl;
	std::cout << "Age - " << age << std::endl;
}
