#include <iostream>

void processValue()
{
    int *number = new int(42);

    std::cout << "Value: " << *number << std::endl;

    throw "Something went wrong";

    delete number; // never reached
}

int main()
{
    try
    {
        processValue();
    }
    catch (const char *error)
    {
        std::cerr << "Error: " << error << std::endl;
    }

    return 0;
}