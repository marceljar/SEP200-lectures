#include <iostream>
#include <memory>
#include <string>

class Person
{
public:
    std::string name;
    std::shared_ptr<Person> partner;

    Person(const std::string &personName) : name(personName)
    {
        std::cout << name << " created" << std::endl;
    }

    ~Person()
    {
        std::cout << name << " destroyed" << std::endl;
    }
};

int main()
{
    std::shared_ptr<Person> person1(new Person("Alice"));
    std::shared_ptr<Person> person2(new Person("Bob"));

    person1->partner = person2;
    person2->partner = person1;

    std::cout << person1->name << "'s partner is "
              << person1->partner->name << std::endl;
    std::cout << person2->name << "'s partner is "
              << person2->partner->name << std::endl;

    std::cout << "person1 count: "
              << person1.use_count() << std::endl;
    std::cout << "person2 count: "
              << person2.use_count() << std::endl;

    return 0;
}