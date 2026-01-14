#include <string>

class Person
{
private:
    std::string name;
    int age;
    double height;

public:
    // base constructor using initializer list
    Person() : name(""), age(0), height(0) {}
    // overloaded constructor usign initializer list
    Person(std::string n, int a, double h)
        : name(n), age(a), height(h) {}
};