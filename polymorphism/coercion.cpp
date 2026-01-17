#include <iostream>

void printTotal(int total) {
    std::cout << "Total: " << total << std::endl;
}

int main() {

    int units = 3;
    double pricePerUnit = 19.99;

    double total = units * pricePerUnit;   // (units) int -> double

    printTotal(total); // (total) double-> int

    return 0;
}
