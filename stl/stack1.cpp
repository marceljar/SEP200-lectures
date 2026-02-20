#include <iostream>
#include <stack>

int main()
{

    std::stack<int> s;

    s.push(10);
    s.push(3);
    s.push(7);
    s.push(25);

    std::cout << "Stack size after pushes: " << s.size() << "\n";
    std::cout << "Top element: " << s.top() << std::endl
              << std::endl;

    s.top() = 99;
    std::cout << "Top element after modification: "
              << s.top() << std::endl
              << std::endl;

    std::cout << "Popping everything: " << std::endl;
    while (!s.empty())
    {
        std::cout << "Top = " << s.top() << " (size = "
                  << s.size() << ")" << std::endl;
        s.pop();
    }

    std::cout << std::endl;

    std::cout << "Stack is now empty." << std::endl;

    return 0;
}