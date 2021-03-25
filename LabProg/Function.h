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
	//Внутри - определяет все ли точки внутри фигуры
	bool inside( Element& e ,const Line& p);
	bool inside( Element& e, const Rectangle& p);
	bool inside( Element& e, const Triangle& p);
	bool inside( Element& e, const Circle& p);// приблизительный ответ, в данном случии думаю подойдет

	
	//Расположение сверху элемента. Неоднозначно. Одна из вершин(точек) выше всех точек 2 фигуры
	bool higher(Element& e, const Line& p);
	bool higher(Element& e, const Rectangle& p);
	bool higher(Element& e, const Triangle& p);
	bool higher(Element& e, const Circle& p);

	//Расположение слева элемента. Неоднозначно. Одна из вершин(точек) левее всех точек 2 фигуры
	bool left(Element& e, const Line& p);
	bool left(Element& e, const Rectangle& p);
	bool left(Element& e, const Triangle& p);
	bool left(Element& e, const Circle& p);

	//Присоединение вершины к вершине с учетом отклонения Q
	bool TopToTop(Element& e, const Line& p, double q);
	bool TopToTop(Element& e, const Rectangle& p, double q);
	bool TopToTop(Element& e, const Triangle& p, double q);
	
	bool CircleToCircle( Circle& p1,  Circle& p2, double q);// присоединение окружности к окружности

	//Присоединение вершины к грани. у первой грани, у второй вершины

	bool СloseToLine(Element& e, Line& p, double q);
	bool СloseToLine(Element& e, const Rectangle& p, double q);
	bool СloseToLine(Element& e, const Triangle& p, double q);
	bool СloseToLine(Element& e, Circle& p2, double q);

	


	
};

