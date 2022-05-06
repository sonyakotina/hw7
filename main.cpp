#include "Complex.h";
#include "Vector.h";

int main()
{
    Complex c1 = { 1, -2 };
    Complex c2 = { 2, 4 };
    cout << c1 << endl;
    cout << c2 << endl;
    cout << c1 + c2 << endl;
    cout << c1 * c2 << endl;
    cout << c1 / c2 << endl;
    Vector v1 = { 1,1,1 };
    Vector v2 = { 2,2,2 };
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v1 + v2 << endl;
    cout << v2.normalized() << endl;

}
