#include <iostream>
#include <string>

using namespace std;

class Engine
{
    int hp_;
    string type_;

public:
    Engine(int hp, string type) : hp_(hp), type_(type)
    {
        cout << "Constructor for Engine called." << endl;
    }
    ~Engine() { cout << "Destructor for Engine called." << endl; }
    void display()
    {
        cout << "Engine type: " << type_ << ", HP: " << hp_ << endl;
    }
};

class Car
{
    Engine engine_;
    string maker_;
    string model_;
    int doors_;

public:
    Car(string maker, string model, int doors, int hp, string type)
        : engine_(hp, type), maker_(maker), model_(model), doors_(doors)
    {
        cout << "Constructor for Car called." << endl;
    }
    ~Car()
    {
        cout << "Destructor for Car called." << endl;
    }
    void display()
    {
        cout << "Maker: " << maker_ << ", Model: " << model_
             << ", Number of doors: " << doors_ << endl;
        engine_.display();
    }
};

int main()
{

    Car *corolla = new Car("Toyota", "Corolla", 4, 170, "Four Cillinders");

    corolla->display();

    delete corolla;

    return 0;
}