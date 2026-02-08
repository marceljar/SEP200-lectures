#include <iostream>

using namespace std;

class Animal
{
public:
    virtual ~Animal() {};

    virtual void speak() const
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() const override
    {
        cout << "Woof!" << endl;
    }
    void fetch() const
    {
        cout << "Dog fetches the ball!" << endl;
    }
};

class Cat : public Animal
{
public:
    void speak() const override
    {
        cout << "Meaw!" << endl;
    }
    void purr() const
    {
        cout << "Purrrrrrrr!" << endl;
    }
};

int main()
{

    Dog *dog = new Dog();

    Animal *animal = dog; // implicit upcast
    animal->speak();

    animal = static_cast<Animal *>(dog); // explicit upcast
    animal->speak();

    delete dog;

    Animal *zoo[3] = {new Dog(), new Animal(), new Cat()};

    for (int i = 0; i < 3; ++i)
    {
        Animal *pointer = zoo[i];

        if (Dog *asDog = dynamic_cast<Dog *>(pointer))
        {
            asDog->fetch();
        }
        else
        {
            std::cout << "Not a Dog, cannot downcast."
                      << std::endl;
        }

        if (Cat *asCat = dynamic_cast<Cat *>(pointer))
        {
            asCat->purr();
        }
        else
        {
            std::cout << "Not a Cat, cannot downcast."
                      << std::endl;
        }
    }

    for (int i = 0; i < 3; ++i)
        delete zoo[i];

    return 0;
}