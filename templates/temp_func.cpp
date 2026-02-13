#include <iostream>
#include <string>

using namespace std;

template <typename T>
T doubleValue(T x)
{
    return x + x;
}

int main()
{
    int age = 7;
    double marks = 3.5;
    string greeting = "Hi";

    cout << "int: " << doubleValue(age) << endl;
    cout << "double: " << doubleValue(marks) << endl;
    cout << "string: " << doubleValue(greeting) << endl;

    return 0;
}
