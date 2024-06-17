#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;

circle::circle()
{
    radius = 0;
}

void circle::setRadius(double rad)
{
    radius = rad;
}

double circle::getRadius()
{
    return radius;
}

double circle::computeArea()
{
    return PI*pow(radius, 2);
}

double circle::computeDiameter()
{
    return radius*2;
}

double circle::computeCircumference()
{
    return computeDiameter()*PI;
}

void circle::print()
{
    cout << "Radius: " << radius << endl;
    cout << "Diamteter : " << computeDiameter() << endl;
    cout << "Circumference: " << computeCircumference() << endl;
    cout << "Area: " << computeArea() << endl;
}
circle::~circle()
{

}
