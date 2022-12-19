#pragma once

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>

class Employee {
	public:
		Employee();
		Employee(std::string name, std::string company, int age);
		void IntroduceYourself();

	private:
		std::string name;
		std::string company;
		int age;
	};

#endif // !EMPLOYEE_H_