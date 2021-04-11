#include "Circle.h"
#include "Point.h"
#include "Typ.h"
Circle::Circle()
{
}

Circle::Circle(const Point& a, double R) : point(a), R(R)
{
	if (R <= 0) throw CircleException();
}

Circle::Circle(const Circle& c)
{
	this->point = c.point;
	this->R = c.R;
}
//+
bool Circle::inside(const Point& p)
{
	if (p.getX() > (point.getX() + R) || p.getX() < (point.getX() - R)) return false;
	if (p.getY() > (point.getY() + R )|| p.getY() < (point.getY() - R)) return false;
	return true;
}
//+
bool Circle::higher(const Point& p)
{
	if(p.getY()> point.getY()-R) return true;
	return false;
}

bool Circle::left(const Point& p)
{
	if (p.getX() > point.getX() - R) return true;
	return false;
	
}

bool Circle::NearbyLine(const Point& p, double q)
{
	return PointToTop(p, q);
}

Typ Circle::getTyp()
{
	return CIRCLE;
}

bool Circle::PointToTop(const Point& p, double q)
{
	double res = getLenghtOfSide(p, point);
	if (res <= R + q && res >= R - q) return true;
	return false;
}


