#include <iostream>

void onDone(int result)
{
    std::cout << "Callback called! Result = "
              << result << std::endl;
}

void computeSum(int a, int b, void (*callback)(int))
{
    int sum = a + b;
    callback(sum);
}

int main()
{

    computeSum(4, 7, onDone);

    return 0;
}