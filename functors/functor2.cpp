#include <algorithm>
#include <iostream>
#include <vector>

class Compare
{
public:
    bool asc;
    bool operator()(int a, int b) const
    {
        if (asc)
        {
            return a < b;
        }
        return a > b;
    }
};

int main()
{
    std::vector<int> numbers = {4, 1, 7, 3, 2};
    Compare comp;
    comp.asc = true;

    std::sort(numbers.begin(), numbers.end(), comp);
    for (int n : numbers)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    comp.asc = false;

    std::sort(numbers.begin(), numbers.end(), comp);
    for (int n : numbers)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}