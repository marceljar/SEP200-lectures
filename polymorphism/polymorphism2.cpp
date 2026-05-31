#include <iostream>
#include <string>

class Enemy
{
protected:
    std::string name_;

public:
    Enemy(const std::string &name) : name_(name) {}
    virtual ~Enemy()
    {
        std::cout << name_ << " destroyed." << std::endl;
    };

    virtual void talk() const = 0;
    virtual void attack() const = 0;
};

class Koopa : public Enemy
{
public:
    Koopa(const std::string &name) : Enemy(name) {}
    ~Koopa()
    {
        std::cout << "Koopa ";
    }

    void talk() const override
    {
        std::cout << "Koopa " << name_ << " says 'Grrr...'"
                  << std::endl;
    }

    void attack() const override
    {
        std::cout << "Koopa " << name_
                  << " attacks by kicking its shell!" << std::endl;
    }
};

class Goomba : public Enemy
{
public:
    Goomba(const std::string &name) : Enemy(name) {}
    ~Goomba()
    {
        std::cout << "Goomba ";
    }

    void talk() const override
    {
        std::cout << "Goomba " << name_ << " says 'Grrr...'"
                  << std::endl;
    }

    void attack() const override
    {
        std::cout << "Goomba " << name_
                  << " attacks by charging forward!" << std::endl;
    }
};

int main()
{
    Enemy *enemies[4] = {
        new Koopa("Kenny"),
        new Goomba("Gary"),
        new Koopa("Kira"),
        new Goomba("Gina")};

    for (int i = 0; i < 4; i++)
    {
        enemies[i]->talk();
        enemies[i]->attack();
        std::cout << "------" << std::endl;
    }

    for (int i = 0; i < 4; i++)
    {
        delete enemies[i];
        enemies[i] = nullptr;
    }

    return 0;
}
