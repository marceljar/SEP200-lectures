#include <iostream>
#include "math2.h"

int main()
{

    std::cout << "Program started!" << std::endl;

    math::print_message();

    int x = 5;
    int y = 7;

    int result = math::add(x, y);

    std::cout << "The sum is: " << result << std::endl;
    std::cout << "PI is defined as: " << math::PI << std::endl;
    std::cout << "The circle areas is: "
              << math::circle_area(2) << std::endl;
    std::cout << "Program finished!" << std::endl;

    return 0;
}
