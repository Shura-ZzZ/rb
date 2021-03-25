#include "Element.h"
#include "Element.h"
#include <cMath>
Element::Element()
{
}

Element::~Element()
{
}

double Element::getLenghtOfSide(Point a, Point b)
{
	return sqrt(pow(a.getX() - b.getX(), 2) +
		pow(a.getY() - b.getY(), 2));
}

//bool Element::inside(const Line& p)
//{
//	if (inside(p.point[1]) && inside(p.point[1])) return true;
//	return false;
//}
//
//bool  Element::inside(const Rectangle& p)
//{
//	if (inside(p.point[1]) && inside(p.point[1]) && inside(p.point[2]) && inside(p.point[3])) return true;
//	return false;
//}
//
//bool  Element::inside(const Triangle& p)
//{
//	if (inside(p.point[1]) && inside(p.point[1]) && inside(p.point[2]) && inside(p.point[3])) return true;
//	return false;
//}
//
//bool Element::inside(const Circle& p)
//{
//	return false;
//}


