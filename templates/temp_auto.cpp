#include <iostream>
#include <string>

template <typename T, typename U>
auto add(const T &a, const U &b)
{
    return a + b;
}

int main()
{
    auto ints = add(10, 20);
    auto doubles = add(2.5, 7.5);
    auto mixedNums = add(10, 7.5);
    auto mixedStrings = add(std::string("Hi "), "Bob");

    std::cout << "ints = " << ints << std::endl;
    std::cout << "doubles = " << doubles << std::endl;
    std::cout << "mixedNums = " << mixedNums << std::endl;
    std::cout << "mixedStrings = " << mixedStrings << std::endl;

    return 0;
}
