#include "Circle.h"
#include <iostream>

	Circle::Circle(double radius) : m_radius(radius) {}

	void Circle::Draw() {
		// draw a circle
		std::cout << "Drawing circle..." << std::endl;
	}

	double Circle::GetArea() {
		return 3.14159 * m_radius * m_radius;
	}