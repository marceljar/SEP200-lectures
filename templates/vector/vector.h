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
    Vector() {}
    Vector(T x, T y) : x_(x), y_(y) {}

    Vector operator+(const Vector &other) const;

    void print() const;
};

template <typename T>
Vector<T> Vector<T>::operator+(const Vector<T> &other) const
{
    return Vector(x_ + other.x_, y_ + other.y_);
}

template <typename T>
void Vector<T>::print() const
{
    std::cout << "(" << x_ << ", " << y_ << ")" << std::endl;
}

#endif