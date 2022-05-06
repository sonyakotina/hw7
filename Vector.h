#ifndef VECTOR3D_H_
#define VECTOR3D_H_

#include <iostream>
using namespace std;

class Vector
{
    public:
        double x, y, z;

        Vector(double x, double y, double z) : x(x), y(y), z(z) {};

        ~Vector() {};

        double magnitude();

        Vector normalized();

        Vector operator+(Vector& other);

        Vector operator-(Vector& other);

        Vector operator*(double k);

        friend std::ostream& operator<<(std::ostream& out, const Vector& v);
};

#endif
