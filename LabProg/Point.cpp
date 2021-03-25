#include "Point.h"
#include "Point.h"



Point::Point()
{
}

Point::Point(double x1, double y1)
{
	x = x1;
	y = y1;
}

Point::Point(const Point& P)
{
	this->x = P.x;
	this->y = P.y;


}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

void Point::setX(double x)
{
	this->x = x;
}

void Point::setY(double y)
{
	this->y = y;
}

Point& Point::operator=(const Point& p)
{
	this->x = p.x;
	this->y = p.y;

	return *this;
}

bool Point::operator==(const Point&) const
{
	return false;
}

Point::~Point()
{
}


