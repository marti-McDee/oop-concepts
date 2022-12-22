#pragma once

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee :AbstractEmployee {
protected:
	std::string name;
	std::string company;
	int age;

public:
	void setName(std::string name);
	std::string getName();
	void setCompany(std::string company);
	std::string getCompany();
	void setAge(int age);
	int getAge();
	void IntroduceYourself();
	Employee(std::string name, std::string company, int age);
	void AskForPromotion();
	void AskForDinner();
};

#endif