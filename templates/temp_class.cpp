#include <iostream>

using namespace std;

template <typename T>
class Vector
{
private:
    T x_;
    T y_;

public:
    Vector() {}
    Vector(T x, T y) : x_(x), y_(y) {}

    Vector operator+(const Vector &other) const
    {
        return Vector(x_ + other.x_, y_ + other.y_);
    }

    void print() const
    {
        cout << "(" << x_ << ", " << y_ << ")" << endl;
    }
};

int main()
{
    Vector<double> v1(3.0, 2.5);
    Vector<int> v2(1, 2);

    Vector<double> v3 = v1 + v1 + v1;
    Vector<int> v4 = v2 + v2;

    cout << "v3 = ";
    v3.print();
    cout << "v4 = ";
    v4.print();

    return 0;
}
