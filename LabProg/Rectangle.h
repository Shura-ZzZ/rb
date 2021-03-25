#pragma once
#include "Element.h"
#include "Point.h"
#include "Line.h"
// точки должны идти по порядку
class Rectangle :
	public Element
{
public:
	//Point a, b, c, d;
	class RectangleException {};
	Point point[4];

	Rectangle();
	Rectangle(const Point& a, const Point& b, const Point& c, const Point& d);
	Rectangle(const Rectangle& t);
	bool inside(const Point& p) override;
	double area();
	/*double getLenghtOfSide(Point a, Point b);*/
	bool higher(const Point& p) override;
	bool left(const Point& p) override;
	bool PointToTop(const Point& p, double q) override;
	//Line diagonal();
	bool NearbyLine(const Point& p, double q) override;

};

