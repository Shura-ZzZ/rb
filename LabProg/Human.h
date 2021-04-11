#pragma once
#include <vector>
#include "Element.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Element.h"
using namespace std;
class Human
{
public:
	Human();
	class HumanException {};
	Human(vector<Element>& element);
};

