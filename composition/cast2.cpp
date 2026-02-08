#include <iostream>

int main()
{

    int num = 10;
    std::cout << "10/3 = " << num / 3 << std::endl;

    double numDouble = static_cast<double>(num);

    std::cout << "10.0/3 = " << numDouble / 3 << std::endl;

    return 0;
}