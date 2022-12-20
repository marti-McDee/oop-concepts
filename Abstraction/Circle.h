#pragma once

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape {
public:
	Circle(double radius);

	void Draw() override;

	double GetArea() override;

private:
	double m_radius;
};

#endif // !CIRCLE_H_