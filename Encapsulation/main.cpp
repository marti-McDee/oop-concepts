#include <iostream>
#include "Employee.h"

int main() {
	Employee emp1 = Employee("Marti", "Marti Mcdee, LLC", 27);
	emp1.setAge(16);

	std::cout << emp1.getName() << " is " << emp1.getAge() << " years old." << std::endl;
}