#pragma once

class Point

{
	double x, y;
public:
	Point();
	Point(double x1, double y1);
	Point(const Point& P);
	double getX() const;
	double getY() const;
	void setX(double x);
	void setY(double y);
	Point& operator=(const Point& p);
	bool operator==(const Point&) const;
	~Point();


};

