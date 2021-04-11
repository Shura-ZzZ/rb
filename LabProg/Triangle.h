#pragma once
#include "Element.h"
#include "Point.h"
#include "Typ.h"
class Triangle :
	public Element
{
public:

	Point point[3];
	class TriangleException {};

	//double getLenghtOfSide(Point a, Point b);
	Triangle();
	Triangle(const Point& a, const Point& b, const Point& c);
	Triangle(const Triangle& t);
	bool higher(const Point& p) override;
	bool inside(const Point& p) override;
	double perimeter();
	double area();
	bool left(const Point& p) override;
	bool PointToTop(const Point& p, double q) override;
	bool NearbyLine(const Point& p, double q) override;
	Typ getTyp() override;

};

