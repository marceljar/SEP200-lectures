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
    std::vector<double> squares(numbers.size());
    std::vector<double> sqrts(numbers.size());

    std::transform(numbers.begin(), numbers.end(),
                   squares.begin(),
                   [](double n)
                   {
                       return n * n;
                   });

    std::transform(numbers.begin(), numbers.end(),
                   sqrts.begin(),
                   [](double n)
                   {
                       return std::sqrt(n);
                   });

    std::cout << "Squares: ";
    std::for_each(squares.begin(), squares.end(), print);
    std::cout << std::endl;

    std::cout << "Square roots: ";
    std::for_each(sqrts.begin(), sqrts.end(), print);
    std::cout << std::endl;

    return 0;
}