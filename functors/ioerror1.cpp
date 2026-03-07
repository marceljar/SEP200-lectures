#include <iostream>
#include <string>

int safe_division(int dividend, int quotient)
{
    if (quotient == 0)
    {
        throw "Division by 0 is undefined!";
    }
    return dividend / quotient;
}

int main()
{
    int dividend = 10, quotient = 0;

    // std::cout << "Result: " << dividend/quotient
    //           << std::endl;

    try
    {
        int result = safe_division(dividend, quotient);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const char *error)
    {
        std::cerr << "Error: " << error << std::endl;
    }

    return 0;
}