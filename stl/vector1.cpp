#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{10, 3, 7, 3, 25};

    v.push_back(42);
    v.push_back(-5);

    std::cout << "v has " << v.size()
              << " elements:" << std::endl;

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    std::cout << "First element = " << v[0] << std::endl;
    std::cout << "Third element = " << v[2]
              << std::endl
              << std::endl;

    v[1] = 99;
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    v.insert(v.begin() + 2, 111); // insert at index 2

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    v.erase(v.begin()); // remove the first element

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl
              << std::endl;

    return 0;
}
