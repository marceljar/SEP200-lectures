#include <iostream>

void printTotal(int total)
{
    std::cout << "Total: " << total << std::endl;
}

int main()
{

    int units = 3;
    double pricePerUnit = 19.99;

    double total = units * pricePerUnit; // int -> double

    printTotal(total); // double-> int

    return 0;
}
