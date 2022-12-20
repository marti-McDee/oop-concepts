#pragma once

#include "Rectangle.h"
#include <iostream>


	Rectangle::Rectangle(double width, double height): m_width(width), m_height(height) {}

	void Rectangle::Draw() {
		// draw a rectangle
		std::cout << "--------" << std::endl;
		std::cout << "|      |" << std::endl;
		std::cout << "--------" << std::endl;
	}

	double Rectangle::GetArea() {
		return m_width * m_height;
	}