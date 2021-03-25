#include "Line.h"
#include <cMath>
#include "Point.h"
#include "Rectangle.h"
//double Line::getLenghtOfSide(Point a, Point b)
//{
//	return sqrt(pow(a.getX() - b.getX(), 2) +
//		pow(a.getY() - b.getY(), 2));
//}

Line::Line()
{
}

Line::Line(const Point& a, const Point& b)

{

	if (a == b) throw  LineException();

	point[0] = a;
	point[1] = b;

}

Line::Line(const Line& t)
{
	/*this->a = t.a;
	this->b = t.b;*/
	for (int i = 0; i < 2; i++)
		this->point[i] = t.point[i];
}

bool Line::inside(const Point& p)
{
	bool c = false;
	if (getLenghtOfSide(point[0], point[1]) == (getLenghtOfSide(point[0], p) + getLenghtOfSide(p, point[1])))
		c = !c;
	return c;
}
//+
bool Line::higher(const Point& p)
{
	if (point[0].getY() < p.getY() || point[1].getY() < p.getY()) return true;
	return false;
}
bool Line::left(const Point& p)
{
	if (point[0].getX() < p.getX() || point[1].getX() < p.getX()) return true;
	return false;
}
bool Line::PointToTop(const Point& p, double q)
{
	if (getLenghtOfSide(p, point[0]) < q) return true;
	if (getLenghtOfSide(p, point[1]) < q) return true;
	return false;
}
bool Line::NearbyLine(const Point& p, double q)
{
	//Нормальный
	double x = point[0].getX() - point[1].getX();
	double y = point[0].getY() - point[1].getY();
	Point n(-y, x);
	//модуль
	double m = sqrt(n.getX()*n.getX()+ n.getY() * n.getY());
	// единичный
	n.setX(n.getX()/m);
	n.setY(n.getY() / m);
	//умножение на q
	Point v(q*n.getX(), q*n.getY());

	//проверка
	Point p1(v.getX() + point[0].getX(), v.getY()+point[0].getY());
	Point p2(v.getX() + point[1].getX(), v.getY() + point[1].getY());
	Rectangle r1(p1, point[0], point[1], p2);


	if (r1.inside(p)) return true;

	v.setX(-v.getX());
	v.setY(-v.getY());

	Point p3(v.getX() + point[0].getX(), v.getY() + point[0].getY());
	Point p4(v.getX() + point[1].getX(), v.getY() + point[1].getY());

	Rectangle r2(p3, point[0], point[1], p4);
	if (r2.inside(p)) return true;

	return false;

	
}


