#pragma once
#include "Element.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
class Function
{
public:
	Function();
	//������ - ���������� ��� �� ����� ������ ������
	bool inside( Element& e ,const Line& p);
	bool inside( Element& e, const Rectangle& p);
	bool inside( Element& e, const Triangle& p);
	bool inside( Element& e, const Circle& p);// ��������������� �����, � ������ ������ ����� ��������

	
	//������������ ������ ��������. ������������. ���� �� ������(�����) ���� ���� ����� 2 ������
	bool higher(Element& e, const Line& p);
	bool higher(Element& e, const Rectangle& p);
	bool higher(Element& e, const Triangle& p);
	bool higher(Element& e, const Circle& p);

	//������������ ����� ��������. ������������. ���� �� ������(�����) ����� ���� ����� 2 ������
	bool left(Element& e, const Line& p);
	bool left(Element& e, const Rectangle& p);
	bool left(Element& e, const Triangle& p);
	bool left(Element& e, const Circle& p);

	//������������� ������� � ������� � ������ ���������� Q
	bool TopToTop(Element& e, const Line& p, double q);
	bool TopToTop(Element& e, const Rectangle& p, double q);
	bool TopToTop(Element& e, const Triangle& p, double q);
	
	bool CircleToCircle( Circle& p1,  Circle& p2, double q);// ������������� ���������� � ����������

	//������������� ������� � �����. � ������ �����, � ������ �������

	bool �loseToLine(Element& e, Line& p, double q);
	bool �loseToLine(Element& e, const Rectangle& p, double q);
	bool �loseToLine(Element& e, const Triangle& p, double q);
	bool �loseToLine(Element& e, Circle& p2, double q);

	


	
};

