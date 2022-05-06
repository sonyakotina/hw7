#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>
using namespace std;

class Circle
{
public:
    double r;

    Circle(double r) : r(r) {};

    ~Circle() {};

    double circumference();

    double area();

    friend std::ostream& operator<<(std::ostream& out, const Circle& c);
};

#endif
