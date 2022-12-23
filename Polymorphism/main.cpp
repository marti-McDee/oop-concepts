#include <iostream>
#include "Developer.h"
#include "Teacher.h"

/*
	The most common use of Polymorphism is when a parent class reference is used
	to refer to a child class object.
*/

int main() {
	Developer dev = Developer("Marti", "YT-Pregaming the Afterlife", 29, "C++");
	Teacher teach("Jack", "Cool School", 36, "Calculus");
	
	Employee* e1 = &dev;
	Employee* e2 = &teach;

	e1->Work();
	e2->Work();
}