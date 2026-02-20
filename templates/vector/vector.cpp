#include "vector.h"

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