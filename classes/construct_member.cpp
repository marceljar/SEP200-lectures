#include <string>

class Person
{
private:
    std::string name;
    int age;
    double height;

public:
    Person() : name(""), age(0), height(0) {}
    Person(std::string n, int a, double h)
        : name(n), age(a), height(h) {}
};