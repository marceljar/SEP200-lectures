#ifndef MATH_H
#define MATH_H

// #pragma once
// almost always work, but it is not standard-compliant

namespace math
{
    // declares that PI was defined somewhere else
    extern const double PI;

    int add(int a, int b);
    double circle_area(double radius);
    void print_message();

}

#endif
