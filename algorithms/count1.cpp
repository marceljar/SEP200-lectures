#include <iostream>
#include <vector>
#include <algorithm>

bool isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    std::vector<int> numbers = {1, 3, 5, 7, 8, 10, 12, 5};

    int num = std::count(numbers.begin(), numbers.end(), 5);
    std::cout << "I found " << num << " 5s! " << std::endl;

    num = std::count_if(numbers.begin(),
                        numbers.end(), isEven);

    std::cout << "I found " << num
              << " even numbers." << std::endl;

    return 0;
}