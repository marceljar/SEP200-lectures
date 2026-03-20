#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

void print(int n)
{
    std::cout << n << " ";
}

bool isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    std::vector<int> source = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> copied;

    // std::copy(source.begin(), source.end(),
    //           std::back_inserter(copied));

    // preallocating can be used instead of back_inserter
    // copied.resize(source.size());
    // std::copy(source.begin(), source.end(), copied.begin());

    std::cout << "Copied elements (std::copy): ";
    std::for_each(copied.begin(), copied.end(), print);
    std::cout << std::endl;

    std::vector<int> evens;
    std::copy_if(source.begin(), source.end(),
                 std::back_inserter(evens), isEven);

    std::cout << "Even elements (std::copy_if): ";
    std::for_each(evens.begin(), evens.end(), print);
    std::cout << std::endl;

    return 0;
}