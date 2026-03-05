#include <iostream>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main()
{

    int (*ops[3])(int, int) = {add, sub, mul};

    int choice = 0;
    int num1 = 6, num2 = 2;

    std::cout << "Choose an operation:" << std::endl;
    std::cout << "0 = add, 1 = sub, 2 = mul: ";
    std::cin >> choice;

    if (choice < 0 || choice > 2)
    {
        std::cout << "Invalid choice" << std::endl;
        return 0;
    }

    int result = ops[choice](num1, num2);
    std::cout << "Result: " << result << std::endl;

    return 0;
}