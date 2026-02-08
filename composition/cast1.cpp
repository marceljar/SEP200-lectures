#include <iostream>

int main()
{

    int i = 10;

    int *p = (int *)i; // casting an integer as an address

    std::cout << "Raw value: " << i << std::endl;

    // this line will lead to a crash
    std::cout << "Pointer value: " << *p << std::endl;

    return 0;
}