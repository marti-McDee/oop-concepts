#pragma once

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
public:
	virtual void Draw() = 0;
	virtual double GetArea() = 0;
};

#endif // !SHAPE_H_

