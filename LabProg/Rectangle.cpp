#include "Rectangle.h"
#include "Typ.h"
#define N 4
#include "Triangle.h"
#include <algorithm>
using namespace std;
Rectangle::Rectangle()
{
}
//размещать вершины по порядку!!!
Rectangle::Rectangle(const Point& a, const Point& b, const Point& c, const Point& d)
{

	if (a == b) throw  RectangleException();
	if (b == c) throw  RectangleException();
	if (c == a) throw RectangleException();
	if (d == a) throw RectangleException();
	if (c == d) throw RectangleException();
	if (d == b) throw RectangleException();
	point[0] = a;
	point[1] = b;
	point[2] = c;
	point[3] = d;


}

Rectangle::Rectangle(const Rectangle& t)
{

	for (int i = 0; i < 4; i++)
		this->point[i] = t.point[i];

}
//Если не сработает то другой алгоритм
// неверный алгоритм
bool Rectangle::inside(const Point& p)
{
	
			

	/*if (p.getX() < point[0].getX()
		|| p.getY() < point[0].getY()) 
		return false;
	if (p.getX() > point[2].getX() || p.getY() > point[2].getY()) return false;
	return true;*/


	bool c = false;
	for (int i = 0, j = N - 1; i < N; j = i++)
	{
		
		if ((((point[i].getY() <= p.getY()) && (p.getY() < point[j].getY())) || ((point[j].getY() <= p.getY()) && (p.getY() < point[i].getY()))) &&
			(((point[j].getY() - point[i].getY()) != 0) && (p.getX() > (( point[j].getX() -  point[i].getX()) * (p.getY() - point[i].getY()) / (point[j].getY() - point[i].getY()) +  point[i].getX()))))
			c = !c;
	}
	return c;
}

double Rectangle::area()
{
	double a = getLenghtOfSide(point[0], point[1]);
	//double b = getLenghtOfSide(point[0], point[2]);
	double c = getLenghtOfSide(point[0], point[3]);
	
	//return min(min(a*b,b*c),c*a);
	return a * c;
}
//+
bool Rectangle::higher(const Point& p)
{
	if (point[0].getY() < p.getY() || point[1].getY() < p.getY() || point[2].getY() < p.getY() || point[3].getY() < p.getY()) return true;
	return false;
}

bool Rectangle::left(const Point& p)
{
	if (point[0].getX() < p.getX() || point[1].getX() < p.getX() || point[2].getX() < p.getX() || point[3].getX() < p.getX()) return true;
	return false;
}

bool Rectangle::PointToTop(const Point& p, double q)
{
	if (getLenghtOfSide(p, point[0]) < q) return true;
	if (getLenghtOfSide(p, point[1]) < q) return true;
	if (getLenghtOfSide(p, point[2]) < q) return true;
	if (getLenghtOfSide(p, point[3]) < q) return true;
	return false;
}

bool Rectangle::NearbyLine(const Point& p, double q)
{
	bool f = false;
	Line a(point[0], point[1]);
	Line b(point[1], point[2]);
	Line c(point[2], point[3]);
	Line d(point[3], point[0]);
	f = a.NearbyLine(p, q) || b.NearbyLine(p, q) || c.NearbyLine(p, q) || d.NearbyLine(p, q);
	return f;
}

Typ Rectangle::getTyp()
{
	return RECTANGLE;
}


