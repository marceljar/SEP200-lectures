#include <iostream>
#include <string>

using namespace std;

int doubleValue(int x)
{
    return x + x;
}

double doubleValue(double x)
{
    return x + x;
}

string doubleValue(string s)
{
    return s + s;
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
