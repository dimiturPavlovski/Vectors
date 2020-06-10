#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "point.h"

class Triangle : public Point{
public:
    Triangle(Point&, Point&, Point&);

private:
    Point firstPoint;
    Point secondPoint;
    Point thirdPoint;
};


#endif // TRIANGLE_H_INCLUDED
