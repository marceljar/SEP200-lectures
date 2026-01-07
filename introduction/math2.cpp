// header.cpp
#include <iostream>
#include "math2.h"

namespace math {

    // defines PI as a const
    const double PI = 3.1416;

    int add(int a, int b) {
        return a + b;
    }

    double circle_area(double radius) {
        return PI * radius * radius;
    }

    void print_message() {
        std::cout << "Hello from main.cpp!" << std::endl;
    }

}