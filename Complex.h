#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

class Complex
{
    public:

        double re, im;

        Complex(double re, double im) : re(re), im(im) {};

        ~Complex() {};

        double abs();

        Complex operator+(Complex& other);

        Complex operator-(Complex& other);

        Complex operator*(Complex& other);

        Complex operator/(Complex& other);


        friend std::ostream& operator<< (std::ostream& out, const Complex& complex);
};

#endif
