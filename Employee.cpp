#include "Employee.h"

Employee::Employee(std::string name, std::string company, int age) : name(name), company(company), age(age) {}

void Employee::IntroduceYourself() {
	std::cout << "Name - " << name << std::endl;
	std::cout << "Company - " << company << std::endl;
	std::cout << "Age - " << age << std::endl;
}
