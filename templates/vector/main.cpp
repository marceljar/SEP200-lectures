#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    Vector<double> v1(3.0, 2.5);
    Vector<int> v2(1, 2);

    Vector<double> v3 = v1 + v1 + v1;
    Vector<int> v4 = v2 + v2;

    cout << "v3 = ";
    v3.print();
    cout << "v4 = ";
    v4.print();

    return 0;
}
