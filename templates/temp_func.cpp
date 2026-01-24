#include <iostream>
#include <string>

template <typename T>
T doubleValue(T x)
{
    return x + x;
}

int main()
{
    int age = 7;
    double marks = 3.5;
    std::string greeting = "Hi";

    std::cout << "int: " << doubleValue(age) << std::endl;
    std::cout << "double: " << doubleValue(marks) << std::endl;
    std::cout << "string: " << doubleValue(greeting) << std::endl;

    return 0;
}
