#pragma once
#include "Element.h"
#include "Point.h"
#include "Typ.h"
class Line :
	public Element
{
public:
	/*Point a, b;*/
	Point point[2];
	class LineException {};
	/*double getLenghtOfSide(Point a, Point b);*/
	Line();
	Line(const Point& a, const Point& b);
	Line(const Line& t);
	bool inside(const Point& p) override;
	bool higher(const Point& p) override;
	bool left(const Point& p) override;
	bool PointToTop(const Point& p, double q) override;
	Typ getTyp() override;
	bool NearbyLine(const Point& p, double q) override;

};

