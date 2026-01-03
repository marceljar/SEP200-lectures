#include <iostream>

class Vector {
private:
    double x_;
    double y_;

public:
    Vector() : x_(0.0), y_(0.0) {}
    Vector(double x, double y) : x_(x), y_(y) {}

    Vector operator+(const Vector& other) const {
        return Vector(x_ + other.x_, y_ + other.y_);
    }

    Vector operator-(const Vector& other) const {
        return Vector(x_ - other.x_, y_ - other.y_);
    }

    Vector operator*(double scalar) const {
        return Vector(x_ * scalar, y_ * scalar);
    }

    friend std::ostream& operator<<(std::ostream& os, 
                                         const Vector& v) {
        os << "(" << v.x_ << ", " << v.y_ << ")";
        return os;
    }

    friend Vector operator*(float scalar, const Vector& v) {
            return Vector(v.x_ * scalar, v.y_ * scalar);
    }
};

int main() {
    Vector a(3.0, 2.5);
    Vector b(1.5, 2.0);

    Vector c = a + b;
    Vector d = a + a - b;
    Vector e = a * 2.0;

    Vector f = 2.0 * b;

    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;

    return 0;
}
