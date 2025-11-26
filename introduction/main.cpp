#include <iostream>
#include "math.h"

int main() {

    std::cout << "Program started!" << std::endl;

    print_message();  // Call function defined in header.cpp

    int x = 5;
    int y = 7;

    int result = add(x, y); // Set a breakpoint here

    std::cout << "The sum is: " << result << std::endl;

    std::cout << "Program finished!" << std::endl;

    return 0;
}
