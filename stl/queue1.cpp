#include <iostream>
#include <queue>

int main()
{
    std::queue<int> q;

    q.push(10);
    q.push(3);
    q.push(7);
    q.push(25);

    std::cout << "Queue size after pushes: "
              << q.size() << std::endl;
    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Back element:  " << q.back() << std::endl
              << std::endl;

    q.front() = 99;
    q.back() = 42;

    std::cout << "After modifying front/back:" << std::endl;
    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Back element:  " << q.back() << std::endl
              << std::endl;

    std::cout << "Dequeuing everything:\n";
    while (!q.empty())
    {
        std::cout << "Front = " << q.front()
                  << " (size = " << q.size() << ")" << std::endl;
        q.pop();
    }

    std::cout << std::endl;

    std::cout << "\nQueue is now empty." << std::endl;

    return 0;
}