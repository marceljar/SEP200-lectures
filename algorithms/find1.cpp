#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

bool isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    std::vector<int>::iterator it1, it2;
    std::vector<int> numbers = {1, 3, 5, 7, 8, 10, 11};

    it1 = std::find(numbers.begin(), numbers.end(), 5);

    if (it1 != numbers.end())
    {
        std::cout << "I found a 5! " << std::endl;
    }
    else
    {
        std::cout << "I could not find a 5." << std::endl;
    }

    it2 = std::find_if(numbers.begin(),
                       numbers.end(), isEven);

    if (it2 != numbers.end())
    {
        std::cout << "The first even number is: "
                  << *it2 << std::endl;
    }
    else
    {
        std::cout << "There are no even numbers."
                  << std::endl;
    }

    return 0;
}