#include <iostream>
#include <list>
#include <algorithm>

void print(int n)
{
    std::cout << n << " ";
}

int main()
{
    std::list<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};

    std::cout << "List: ";
    std::for_each(numbers.begin(), numbers.end(), print);
    std::cout << std::endl;

    return 0;
}