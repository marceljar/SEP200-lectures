// header.cpp
#include <iostream>
#include "math2.h"

// defines PI as a const

const double math::PI = 3.1416;

int math::add(int a, int b)
{
    return a + b;
}

double math::circle_area(double radius)
{
    return PI * radius * radius;
}

void math::print_message()
{
    std::cout << "Hello from main.cpp!" << std::endl;
}
