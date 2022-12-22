#include "Developer.h"
#include "Employee.h"

Developer::Developer(std::string name, std::string company, int age, std::string favLanguage)
: Employee(name, company, age) {
	this->favLanguage = favLanguage;
}

void Developer::FixBug() {
	std::cout << name << " fixed bug using " << favLanguage << std::endl;
}
