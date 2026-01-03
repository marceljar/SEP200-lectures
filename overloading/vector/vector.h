#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
private:
    double x_;
    double y_;

public:
    Vector();
    Vector(double x, double y);
    Vector operator+(const Vector& other) const;
    Vector operator-(const Vector& other) const;
    Vector operator*(double scalar) const;

    friend std::ostream& operator<<(std::ostream&, const Vector&);
    friend Vector operator*(float, const Vector&);
};

#endif