#include <iostream>
#include <list>
#include <iterator>

void listElements(std::list<int> l, std::list<int>::iterator it)
{
    for (it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> l;
    std::list<int>::iterator it;

    l.push_back(20);
    l.push_back(30);
    l.push_front(10);
    l.push_back(40);
    l.push_back(50);

    listElements(l, it);

    it = l.begin();
    std::advance(it, 2);
    l.erase(it);

    listElements(l, it);

    it = l.end();
    std::advance(it, -1);
    l.insert(it, 111);

    listElements(l, it);

    l.pop_back();
    l.pop_front();

    listElements(l, it);

    return 0;
}