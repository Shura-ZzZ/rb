// LabProg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Point.h"
#include <iostream>
#include "Triangle.h"
#include "Element.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
int main()
{
    std::cout << "Hello World!\n";
    Triangle t(Point(0, 0), Point(0, 4), Point(4, 0));
    Point p(3, 3);
    std::cout << t.inside(p);
    Rectangle r(Point(0, 0), Point(0, 4), Point(4, 4), Point(4, 0));
    std::cout << r.inside(p);

    Line l(Point(5, 2), Point(2, 5));
    std::cout << l.NearbyLine(p,1);

   

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
