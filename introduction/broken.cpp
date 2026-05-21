#include <iostream>

int add(int, int);

int main()
{
    std::cout << add(3, 4) << std::endl;

    return 0;
}

int add(int i, int j)
{
    return i + j;
}