#include <iostream>
#include "point.h"
#include "triangle.h"
using namespace std;

int main()
{
    Point* p1 = new Point(1,2,4);
    Point* p2 = new Point(1,2,5);
        Point* p3 = new Point(5,7,6);
    Triangle * triangle = new Triangle(*p1,*p2,*p3);
    return 0;
}
