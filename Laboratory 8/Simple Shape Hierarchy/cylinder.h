#ifndef CYLINDER_H_INCLUDED
#define CYLINDER_H_INCLUDED
#include "circle.h"

class cylinder:public circle
{
public:
    cylinder();
    ~cylinder();
    void setHeight(double);
    double getHeight();
    double computeArea();
    double computeVolume();
    void print();
private:
    double height;
};

#endif // CYLINDER_H_INCLUDED
