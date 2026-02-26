#include <iostream>
#include <vector>
#include <algorithm>

void print(int n)
{
    std::cout << n << " ";
}

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};

    std::cout << "Vector: ";
    std::for_each(numbers.begin(), numbers.end(), print);
    std::cout << std::endl;

    return 0;
}