#include "Complex.h"

Complex Complex::operator+(Complex& other)
{
    return { re + other.re, im + other.im };
}

Complex Complex::operator-(Complex& other)
{
    return { re - other.re, im - other.im };
}

Complex Complex::operator*(Complex& other)
{
    return { re * other.re - im * other.im, re * other.im + im * other.re };
}

Complex Complex::operator/(Complex& other)
{
    Complex z = { (re * other.re + im * other.im) / (pow(other.re,2) + pow(other.im,2)),
        (im * other.re - re * other.im) / (pow(other.re,2) + pow(other.im,2)) };
    return { z.re, z.im };
}


double Complex::abs()
{
    return sqrt(pow(re, 2) + pow(im, 2));
}

std::ostream& operator<<(std::ostream& out, const Complex& c) {
    if (c.re != 0) {
        out << (c.re < 0 ? "-" : "");
        out << abs(c.re);
    }
    if (c.im != 0) {
        out << (c.im < 0 ? "-" : "+");
        out << abs(c.im);
        out << "i";
    }
    return out;
}
