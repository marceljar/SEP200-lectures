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

    void print() const {
        std::cout << "(" << x_ << ", " 
                  << y_ << ")" << std::endl;
    }
};

int main() {
    Vector a(3.0, 2.5);
    Vector b(1.5, 2.0);

    Vector c = a + b;
    Vector d = a + b + b;

    std::cout << "c = "; c.print();
    std::cout << "d = "; d.print();

    return 0;
}
