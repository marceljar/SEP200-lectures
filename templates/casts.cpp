#include <iostream>
#include <string>

class Base
{
public:
    virtual ~Base() {};
};

class Derived : public Base
{
public:
    void greet() const
    {
        std::cout << "Hello from Derived\n";
    }
};

void legacyPrint(char *text)
{
    std::cout << text << std::endl;
}

int main()
{

    double price = 19.99;
    int dollars = static_cast<int>(price);

    std::cout << "static_cast result: " << dollars << std::endl;

    Base *arrayB[2];
    arrayB[0] = new Derived();
    arrayB[1] = new Base();

    Derived *arrayD[2];
    arrayD[0] = dynamic_cast<Derived *>(arrayB[0]);
    arrayD[1] = dynamic_cast<Derived *>(arrayB[1]);

    for (int i = 0; i < 2; i++)
    {
        if (arrayD[i])
        {
            arrayD[i]->greet();
        }
        else
        {
            std::cout << "dynamic_cast failed safely\n";
        }
        delete arrayD[i];
    }

    const char *message = "Hello world";
    legacyPrint(const_cast<char *>(message));

    return 0;
}
