#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#define PI 3.14

class circle
{
public:
    circle();
    ~circle();
    void setRadius(double);
    double getRadius();
    double computeArea();
    double computeDiameter();
    double computeCircumference();
    void print();
private:
    double radius;
};

#endif // CIRCLE_H_INCLUDED
