// header.cpp
#include <iostream>
#include "math.h"

// defines PI as a const
const double PI = 3.1416;

// Returns the sum of two ints
int add(int a, int b) {
    return a + b;
}

// Returns the area of a circle
double circle_area(double radius) {
    return PI * radius * radius;
}

// Prints a message
void print_message() {
    std::cout << "Hello from header.cpp!" << std::endl;
}
