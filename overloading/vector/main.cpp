#include <iostream>
#include "vector.h"

int main() {
    Vector a(3.0, 2.5);
    Vector b(1.5, 2.0);

    Vector c = a + b;
    Vector d = a + a - b;
    Vector e = a * 2.0;

    Vector f = 2.0 * b;

    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;

    return 0;
}
