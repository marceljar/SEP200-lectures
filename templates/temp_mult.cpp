#include <iostream>
#include <string>

template <typename T, typename U>
void printPair(T first, U second)
{
    std::cout << "First: " << first
              << ", Second: " << second << std::endl;
}

int main()
{

    printPair(10, 3.14);
    printPair("Age", 42);
    printPair(std::string("Name"), "Bob");

    return 0;
}
