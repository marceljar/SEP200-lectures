#include <string>

class Person
{
private:
    std::string name_;
    int age_;
    double height_;

public:
    // base constructor using initializer list
    Person() : name_(""), age_(0), height_(0) {}
    // overloaded constructor usign initializer list
    Person(std::string n, int a, double h)
        : name_(n), age_(a), height_(h) {}
};