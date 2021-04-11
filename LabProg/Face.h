#pragma once
#include <vector>
#include "Element.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Element.h"
#include <vector>
using namespace std;
class Face
{
private:
	Circle eye1;
	Circle eye2;
	Line mouth;
	Circle head;
public:
	bool isFace;
	Point locatin;
	class FaceException {};
	Face();
	Face(vector<Element>& element);

	
};

