#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // for sqrt

void print(double n)
{
    std::cout << n << " ";
}

int main()
{
    std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<double> offsets(numbers.size());

    int offset = 4;

    std::transform(numbers.begin(), numbers.end(), offsets.begin(),
                   [offset](double n)
                   {
                       return n + offset;
                   });

    std::cout << "Offset Numbers: ";
    std::for_each(offsets.begin(), offsets.end(), print);
    std::cout << std::endl;

    return 0;
}