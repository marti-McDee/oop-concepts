#pragma once
#include "Employee.h"

class Developer :
    public Employee
{
public:
	std::string favLanguage;
	Developer(std::string name, std::string company, int age, std::string favLanguage);
	void FixBug();
	//void Work();
};

