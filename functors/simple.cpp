#include <iostream>
#include <string>

void sayHello()
{
    std::cout << "Hello!" << std::endl;
}

void greeting(std::string name)
{
    std::cout << "Hello " << name << " !" << std::endl;
}

int main()
{

    void (*fp)() = sayHello;
    fp();

    void (*fp2)(std::string) = greeting;
    fp2("Marcel");

    return 0;
}