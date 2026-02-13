#include "vector.h"

Vector Vector::operator+(const Vector &other) const
{
    return Vector(x_ + other.x_, y_ + other.y_);
}

void Vector::print() const
{
    std::cout << "(" << x_ << ", " << y_ << ")" << std::endl;
}