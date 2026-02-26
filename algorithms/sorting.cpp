#include <iostream>
#include <vector>
#include <algorithm>

bool ascending(int a, int b)
{
    return a < b;
}

bool descending(int a, int b)
{
    return a > b;
}

void print(double n)
{
    std::cout << n << " ";
}

int main()
{
    std::vector<int> numbers{7, 2, 9, 4, 1, 8, 3, 6, 5};

    std::cout << "Original vector: ";
    std::for_each(numbers.begin(), numbers.end(), print);
    std::cout << std::endl;

    std::sort(numbers.begin(), numbers.end(), ascending);

    std::cout << "Sorted ascending: ";
    std::for_each(numbers.begin(), numbers.end(), print);
    std::cout << std::endl;

    std::sort(numbers.begin(), numbers.end(), descending);

    std::cout << "Sorted descending: ";
    std::for_each(numbers.begin(), numbers.end(), print);
    std::cout << std::endl;

    return 0;
}