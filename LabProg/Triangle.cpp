#include "Triangle.h"
#include "Point.h"
#include "Line.h"
#include "Typ.h"
#include <iostream>

#include <cMath>
#define N 3

//
//double Triangle::getLenghtOfSide(Point a, Point b)
//{
//	return sqrt(pow(a.getX() - b.getX(), 2) +
//		pow(a.getY() - b.getY(), 2));
//
//}

Triangle::Triangle()
{
}

Triangle::Triangle(const Point& a, const Point& b, const Point& c) {

	if (a == b) throw  TriangleException();
	if (b == c) throw  TriangleException();
	if (c == a) throw  TriangleException();

	point[0] = a;
	point[1] = b;
	point[2] = c;


}
Triangle::Triangle(const Triangle& t)
{
	/*this->a = t.a;
	this->b = t.b;
	this->c = t.c;*/
	for (int i = 0; i < N; i++)
		this->point[i] = t.point[i];

}
//+
bool Triangle::higher(const Point& p)
{
	if (point[0].getY() < p.getY() || point[1].getY() < p.getY() || point[2].getY() < p.getY()) return true;
	return false;
}


double Triangle::perimeter()
{
	double per;
	per = getLenghtOfSide(point[0], point[1]);
	per += getLenghtOfSide(point[0], point[2]);
	per += getLenghtOfSide(point[1], point[2]);

	return per;
}

double Triangle::area()
{
	double p = perimeter() / 2;
	return sqrt(p * (p - getLenghtOfSide(point[0], point[1])) * (p - getLenghtOfSide(point[0], point[2])) * (p - getLenghtOfSide(point[1], point[2])));
}

bool Triangle::left(const Point& p)
{
	if (point[0].getX() < p.getX() || point[1].getX() < p.getX() || point[2].getX() < p.getX()) return true;
}

bool Triangle::PointToTop(const Point& p, double q)
{
	if (getLenghtOfSide(p, point[0]) < q) return true;
	if (getLenghtOfSide(p, point[1]) < q) return true;
	if (getLenghtOfSide(p, point[2]) < q) return true;
	
	return false;
}

bool Triangle::NearbyLine(const Point& p, double q)
{
	bool f = false;
	Line a(point[1], point[0]);
	Line b(point[2], point[0]);
	Line c(point[1], point[2]);

	f = a.NearbyLine(p, q) || b.NearbyLine(p, q) || c.NearbyLine(p, q);
	return f;
}

Typ Triangle::getTyp()
{
	return TRIANGLE;
}






bool Triangle::inside(const Point& p)
{

	bool c = false;
	double S = area();
	Triangle t1(point[0], point[1], p);
	Triangle t2(point[0], point[2], p);
	Triangle t3(point[2], point[1], p);
	/*double S1 = t1.area();
	double S2 = t2.area();
	double S3 = t3.area();*/
	double S1 = t1.area() + t2.area() + t3.area();
	double res = S - S1;
	//TODO-добавить константу 
	if (res <=1 && res >=-1)//>=???
	{
		return true;
	}
	return false;


}




