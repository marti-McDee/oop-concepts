#include <iostream>
#include "Employee.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {
	/*Employee emp1 = Employee("Marti", "Marti Mcdee, LLC", 27);
	emp1.setAge(16);

	emp1.AskForDinner();

	Employee emp2 = Employee("Selina", "Apple", 32);
	emp2.AskForDinner();*/

	Rectangle rect(4, 6);
	rect.Draw();

	Circle circ(9);
	circ.Draw();
}