#include <iostream>
#include <string>

using namespace std;

template <typename T, typename U>
auto add(const T &a, const U &b)
{
    return a + b;
}

int main()
{
    int ints = add(10, 20);
    double doubles = add(2.5, 7.5);
    double mixedNums = add(10, 7.5);
    string mixedStrings = add(string("Hi "), "Bob");

    cout << "ints = " << ints << endl;
    cout << "doubles = " << doubles << endl;
    cout << "mixedNums = " << mixedNums << endl;
    cout << "mixedStrings = " << mixedStrings << endl;

    return 0;
}
