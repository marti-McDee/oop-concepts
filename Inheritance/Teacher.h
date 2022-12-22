#pragma once
#include "Employee.h"

class Teacher : public Employee
{
protected:
	std::string subject;

public:
	void PrepareLesson();
	Teacher(std::string name, std::string company, int age, std::string subject);
};

