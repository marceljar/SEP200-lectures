#include <iostream>
#include <string>

int doubleValue(int x)
{
    return x + x;
}

double doubleValue(double x)
{
    return x + x;
}

std::string doubleValue(std::string s)
{
    return s + s;
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
