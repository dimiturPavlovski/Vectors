#include "triangle.h"
#include "exceptions.h"

Triangle::Triangle(Point& firstPoint, Point& secondPoint, Point& ThirdPoint){
    if(firstPoint.getX() == secondPoint.getX() && firstPoint.getY() == secondPoint.getY()) throw EqualPointException(1,2);
    if(firstPoint.getX() == thirdPoint.getX() && firstPoint.getY() == thirdPoint.getY()) throw EqualPointException(1,3);
    if(secondPoint.getX() == thirdPoint.getX() && secondPoint.getY() == thirdPoint.getY()) throw EqualPointException(2,3);

    this->firstPoint = firstPoint;
    this->secondPoint = secondPoint;
    this->thirdPoint = thirdPoint;
}



