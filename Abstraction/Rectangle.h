#pragma once

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(double width, double height);

	void Draw() override;

	double GetArea() override;

private:
	double m_width;
	double m_height;
};

#endif // !RECTANGLE_H_
