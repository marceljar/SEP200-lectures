#include <iostream>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    std::cout << "3 + 4 = " << add(3, 4) << std::endl;
    std::cout << "2.5 + 4.1 = " << add(2.5, 4.1) << std::endl;
    std::cout << "1 + 2 + 3 = " << add(1, 2, 3) << std::endl;

    return 0;
}
