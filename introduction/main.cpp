#include <iostream>
#include "math.h"

int main()
{

    std::cout << "Program started!" << std::endl;

    print_message(); //function defined in math.cpp

    int x = 5;
    int y = 7;

    int result = add(x, y); //function defined in math.cpp

    std::cout << "The sum is: " << result << std::endl;

    std::cout << "Program finished!" << std::endl;

    return 0;
}
