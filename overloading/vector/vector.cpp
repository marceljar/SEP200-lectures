#include "vector.h"
#include <iostream>

Vector::Vector() : x_(0.0), y_(0.0) {}
Vector::Vector(double x, double y) : x_(x), y_(y) {}

Vector Vector::operator+(const Vector& other) const {
    return Vector(x_ + other.x_, y_ + other.y_);
}

Vector Vector::operator-(const Vector& other) const {
    return Vector(x_ - other.x_, y_ - other.y_);
}

Vector Vector::operator*(double scalar) const {
    return Vector(x_ * scalar, y_ * scalar);
}

std::ostream& operator<<(std::ostream& os, const Vector& v) {
    os << "(" << v.x_ << ", " << v.y_ << ")";
    return os;
}

Vector operator*(float scalar, const Vector& v) {
        return Vector(v.x_ * scalar, v.y_ * scalar);
}
