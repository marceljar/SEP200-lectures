#include <iostream>

int main()
{
    int size;

    std::cout << "How many numbers do you want to enter? ";
    std::cin >> size;

    int *numbers = new int[size];

    for (int i = 0; i < size; ++i)
    {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    std::cout << "\nYou entered: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    delete[] numbers;

    return 0;
}