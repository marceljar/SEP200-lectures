#include <iostream>
#include <forward_list>
#include <iterator>

int main()
{
    std::forward_list<int> fl{10, 3, 7, 3, 25};

    std::forward_list<int>::iterator it;

    std::cout << "List elements using iterator: ";
    for (it = fl.begin(); it != fl.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    fl.push_front(42);
    fl.push_front(-5);

    std::cout << "List elements using iterator: ";
    for (it = fl.begin(); it != fl.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    it = fl.before_begin();
    fl.insert_after(it, 111);

    std::cout << "List elements using iterator: ";
    for (it = fl.begin(); it != fl.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    it = fl.begin();
    fl.insert_after(it, 222);

    std::cout << "List elements using iterator: ";
    for (it = fl.begin(); it != fl.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}