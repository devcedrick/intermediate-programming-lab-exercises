#include <iostream>
#include "cylinder.h"

using namespace std;

cylinder::cylinder()
{
    height = 0;
}

void cylinder::setHeight(double h)
{
    height = h;
}

double cylinder::getHeight()
{
    return height;
}

double cylinder::computeArea()
{
    return (circle::computeCircumference()*height) + (2*circle::computeArea());
}

double cylinder::computeVolume()
{
    return circle::computeArea()*height;
}

void cylinder::print()
{
    cout << "Radius: " << circle::getRadius() << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << computeArea() << endl;
    cout << "Volume: " << computeVolume() << endl;
}

cylinder::~cylinder()
{

}
