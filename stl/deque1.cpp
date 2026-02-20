#include <iostream>
#include <deque>

int main()
{
    std::deque<int> d{10, 3, 7, 3, 25};

    d.push_back(42);
    d.push_front(-5);

    std::cout << "d has " << d.size() << " elements:\n";
    for (int i = 0; i < d.size(); i++)
    {
        std::cout << d[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    std::cout << "Front element = "
              << d.front() << std::endl;

    std::cout << "Back element  = "
              << d.back() << std::endl;
    std::cout << "Element at index 2 = " << d.at(2)
              << std::endl
              << std::endl;

    d[1] = 99;
    for (int i = 0; i < d.size(); i++)
    {
        std::cout << d[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    d.insert(d.begin() + 2, 111); // insert at index 2

    for (int i = 0; i < d.size(); i++)
    {
        std::cout << d[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    d.erase(d.begin()); // remove the first element

    for (int i = 0; i < d.size(); i++)
    {
        std::cout << d[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    return 0;
}
