#pragma once
#include "Element.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
class Circle :
	public Element
{

public:

	Point point;
	double R;
	class CircleException {};
	Circle();
	Circle(const Point& a, double R);
	Circle(const Circle& c);
	bool inside(const Point& p) override;
	bool higher(const Point& p) override;
	bool left(const Point& p) override;
	bool PointToTop(const Point& p, double q) override;
	bool NearbyLine(const Point& p, double q) override;
	

};

