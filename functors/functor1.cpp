#include <iostream>

class Counter
{
public:
    int count;

    Counter() : count(0) {}

    void operator()()
    {
        count++;
        std::cout << "Called the counter object "
                  << count << " times." << std::endl;
    }
};

int main()
{
    Counter c;

    c();
    c();
    std::cout << "Calls: " << c.count << std::endl;

    return 0;
}