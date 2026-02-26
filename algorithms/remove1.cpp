#include <iostream>
#include <vector>
#include <algorithm>

void print(double n)
{
    std::cout << n << " ";
}

bool isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    std::vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "All numbers: ";
    std::for_each(numbers.begin(), numbers.end(), print);
    std::cout << std::endl;

    auto newEnd = std::remove_if(numbers.begin(),
                                 numbers.end(), isEven);

    std::cout << "Odd numbers: ";
    std::for_each(numbers.begin(), numbers.end(), print);
    std::cout << std::endl;

    // Erase the "removed" elements
    numbers.erase(newEnd, numbers.end());

    std::cout << "Odd numbers: ";
    std::for_each(numbers.begin(), numbers.end(), print);
    std::cout << std::endl;

    return 0;
}