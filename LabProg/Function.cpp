#include "Function.h"

Function::Function()
{
}

bool Function::inside( Element& e, const Line& p)
{
	if (e.inside(p.point[0]) && e.inside(p.point[1])) return true;
	return false;
}

bool Function::inside( Element& e, const Rectangle& p)
{
	if (e.inside(p.point[0]) && e.inside(p.point[1]) && e.inside(p.point[2]) && e.inside(p.point[3])) return true;
	return false;
}

bool Function::inside( Element& e, const Triangle& p)
{
	if (e.inside(p.point[0]) && e.inside(p.point[1]) && e.inside(p.point[2])) return true;
	return false;
}

bool Function::inside( Element& e, const Circle& p)
{
	if(!(e.inside(p.point)))
	return false;
	Point a(p.point.getX()+p.R, p.point.getY());
	Point b(p.point.getX(), p.point.getY()-p.R);
	Point c(p.point.getX() - p.R, p.point.getY());
	Point d(p.point.getX(), p.point.getY() +p.R);
	Rectangle r(a, b, c, d);
	inside(e, r);

}

bool Function::higher(Element& e, const Line& p)
{
	if (e.higher(p.point[0]) && e.higher(p.point[1])) return true;
	return false;
}

bool Function::higher(Element& e, const Rectangle& p)
{
	if (e.higher(p.point[0]) && e.higher(p.point[1]) && e.higher(p.point[2]) && e.higher(p.point[3])) return true;
	return false;
}

bool Function::higher(Element& e, const Triangle& p)
{
	if (e.higher(p.point[0]) && e.higher(p.point[1]) && e.higher(p.point[2])) return true;
	return false;
}

bool Function::higher(Element& e, const Circle& p)
{
	Point n(p.point.getX(), p.point.getY()-p.R);
	if (e.higher(n)) true;
	return false;
}

bool Function::left(Element& e, const Line& p)
{
	if (e.left(p.point[0]) && e.left(p.point[1])) return true;
	return false;
}

bool Function::left(Element& e, const Rectangle& p)
{
	if (e.left(p.point[0]) && e.left(p.point[1]) && e.left(p.point[2]) && e.left(p.point[3])) return true;
	return false;
}

bool Function::left(Element& e, const Triangle& p)
{
	if (e.left(p.point[0]) && e.left(p.point[1]) && e.left(p.point[2])) return true;
	return false;
}

bool Function::left(Element& e, const Circle& p)
{
	Point n(p.point.getX()- p.R, p.point.getY() );
	if (e.left(n)) true;
	
	return false;
}

bool Function::TopToTop(Element& e, const Line& p, double q)
{
	if (e.PointToTop(p.point[0], q)) return true;
	if (e.PointToTop(p.point[1], q)) return true;
	return false;
}

bool Function::TopToTop(Element& e, const Rectangle& p, double q)
{
	if (e.PointToTop(p.point[0], q)) return true;
	if (e.PointToTop(p.point[1], q)) return true;
	if (e.PointToTop(p.point[2], q)) return true;
	if (e.PointToTop(p.point[3], q)) return true;
	return false;
}

bool Function::TopToTop(Element& e, const Triangle& p, double q)
{
	if (e.PointToTop(p.point[0], q)) return true;
	if (e.PointToTop(p.point[1], q)) return true;
	if (e.PointToTop(p.point[2], q)) return true;

	return false;
}

bool Function::CircleToCircle( Circle& p1,  Circle& p2, double q)
{
	double res = p1.getLenghtOfSide(p1.point, p2.point);
	if (res < p2.R + p1.R + q && res >p2.R + p1.R + -q) return true;
	return false;
}

bool Function::ÑloseToLine(Element& e,  Line& p, double q)
{
	bool f = false;
	f = e.NearbyLine(p.point[0],q) || e.NearbyLine(p.point[1],q);
	return  f;
}

bool Function::ÑloseToLine(Element& e, const Rectangle& p, double q)
{
	bool f = false;
	f = e.NearbyLine(p.point[0], q) || e.NearbyLine(p.point[1], q) || e.NearbyLine(p.point[2], q) || e.NearbyLine(p.point[3], q);
	return  f;
}

bool Function::ÑloseToLine(Element& e, const Triangle& p, double q)
{
	bool f = false;
	f = e.NearbyLine(p.point[0], q) || e.NearbyLine(p.point[1], q) || e.NearbyLine(p.point[2], q);
	return  f;
}

bool Function::ÑloseToLine(Element& e, Circle& p2, double q)
{
	bool f = false;
	f = e.NearbyLine(p2.point, p2.R+q);
	return f;
}



