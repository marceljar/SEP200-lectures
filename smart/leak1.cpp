#include <iostream>

void leakMemory(int i)
{
    int *number = new int(i);

    std::cout << "Value: " << *number << std::endl;
}

int main()
{
    for (int i = 0; i < 5; ++i)
    {
        leakMemory(i);
    }

    return 0;
}