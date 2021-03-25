#pragma once
#include "Point.h"

class Element
{


public:

	Element();
	~Element();

	virtual bool inside(const Point& p) = 0;
	//virtual bool inside(const Element& p) = 0;
	double getLenghtOfSide(Point a, Point b);
	
	virtual bool higher(const Point& p) = 0;

	virtual bool left(const Point& p) = 0;
	virtual bool PointToTop(const Point& p, double q) = 0;
	virtual bool NearbyLine(const Point& p, double q) = 0;


};