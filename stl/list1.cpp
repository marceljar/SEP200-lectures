#include <iostream>
#include <list>
#include <iterator>

int main()
{
    std::list<int> l;
    std::list<int>::iterator it;

    l.push_back(20);
    l.push_back(30);
    l.push_front(10);
    l.push_back(40);
    l.push_back(50);

    std::cout << "List elements using iterator: ";
    for (it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    it = l.begin();
    std::advance(it, 2);
    l.erase(it);

    std::cout << "List elements using iterator: ";
    for (it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    it = l.end();
    std::advance(it, -1);
    l.insert(it, 111);

    std::cout << "List elements using iterator: ";
    for (it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    l.pop_back();
    l.pop_front();

    std::cout << "List elements using iterator: ";
    for (it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
