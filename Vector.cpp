#include "Vector.h"

double Vector::magnitude()
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

Vector Vector::normalized()
{
    double m = 1 / magnitude();
    return { x * m, y * m, z * m };
}
Vector Vector::operator+(Vector& other)
{
    return { x + other.x, y + other.y, z + other.z };
}

Vector Vector::operator-(Vector& other)
{
    return { x - other.x, y - other.y, z - other.z };
}

Vector Vector::operator*(double k)
{
    return { x * k, y * k, z * k };
}


std::ostream& operator<<(std::ostream& out, const Vector& v)
{
    return out << "Vector{" << v.x << ", " << v.y << ", " << v.z << "}";
}
