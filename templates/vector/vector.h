#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

template <typename T>
class Vector
{
private:
    T x_;
    T y_;

public:
    Vector() : x_(T{}), y_(T{}) {}
    Vector(T x, T y) : x_(x), y_(y) {}

    Vector operator+(const Vector &other) const
    {
        return Vector(x_ + other.x_, y_ + other.y_);
    }

    void print() const
    {
        std::cout << "(" << x_ << ", " << y_ << ")" << std::endl;
    }
};

#endif