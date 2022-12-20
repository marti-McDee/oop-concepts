#include "Employee.h"

void Employee::setName(std::string name) {
	this->name = name;
}

std::string Employee::getName() {
	return name;
}

void Employee::setCompany(std::string company) {
	this->company = company;
}

std::string Employee::getCompany() {
	return company;
}

void Employee::setAge(int age) {
	// validation rule applied to this setter method
	if(age >= 18) { this->age = age; }
}

int Employee::getAge() {
	return age;
}

void Employee::IntroduceYourself() {
	std::cout << "Name - " << name << std::endl;
	std::cout << "Company - " << company << std::endl;
	std::cout << "Age - " << age << std::endl;
}

Employee::Employee(std::string name, std::string company, int age) {
	this->name = name;
	this->company = company;
	this->age = age;
}