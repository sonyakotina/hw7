#include "circle.h"

double Circle::circumference() {
    return 2 * 3.14 * r;
}

double Circle::area() {
    return 3.14 * r * r;
}

std::ostream& operator<<(std::ostream& out, const Circle& c)
{
    return out << "Circle( " << c.r << " )";
}
