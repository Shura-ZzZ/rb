#include "Face.h"
#include "Typ.h"
#define N 4
Face::Face()
{
}

Face::Face(vector<Element>& element)
{
	if (element.size() != N)
		throw FaceException();
	isFace = false;
	int i;
	for ( i = 0; i < element.size(); i++)
	{
		if (element[i].getTyp() == Line)

	}
}
