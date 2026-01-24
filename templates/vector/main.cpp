#include <iostream>
#include "vector.h"

int main()
{
    Vector<double> v1(3.0, 2.5);
    Vector<double> v2(1.5, 2.0);

    Vector<double> v3 = v1 + v2;
    Vector<double> v4 = v1 + v2 + v2;

    std::cout << "v3 = ";
    v3.print();
    std::cout << "v4 = ";
    v4.print();

    Vector<int> a(3, 2);
    Vector<int> b(1, 2);

    Vector<int> c = a + b;
    Vector<int> d = a + b + b;

    std::cout << "c = ";
    c.print();
    std::cout << "d = ";
    d.print();

    return 0;
}
