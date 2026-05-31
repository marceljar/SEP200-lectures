#include <iostream>
#include <string>

class Enemy
{
protected:
    std::string name_;

private:
    int lives_;

public:
    Enemy(const std::string &name, int lives)
        : name_(name), lives_(lives > 0 ? lives : 1)
    {
    }

    virtual ~Enemy()
    {
        std::cout << name_ << " destroyed." << std::endl;
    }

    void takeDamage(int damage)
    {
        if (damage > 0)
        {
            lives_ -= damage;

            if (lives_ < 0)
            {
                lives_ = 0;
            }
        }
    }

    int getLives() const
    {
        return lives_;
    }

    bool isDead() const
    {
        return lives_ == 0;
    }

    virtual void talk() const = 0;
    virtual void attack() const = 0;
};

class Koopa : public Enemy
{
public:
    Koopa(const std::string &name, int lives)
        : Enemy(name, lives)
    {
    }

    ~Koopa()
    {
        std::cout << "Koopa ";
    }

    void talk() const override
    {
        if (isDead())
        {
            std::cout << "Koopa " << name_
                      << " is dead." << std::endl;
            return;
        }

        std::cout << "Koopa " << name_
                  << " says 'Grrr...'" << std::endl;
    }

    void attack() const override
    {
        if (isDead())
        {
            std::cout << "Koopa " << name_
                      << " is dead." << std::endl;
            return;
        }

        std::cout << "Koopa " << name_
                  << " attacks by kicking its shell!"
                  << std::endl;
    }
};

class Goomba : public Enemy
{
public:
    Goomba(const std::string &name, int lives)
        : Enemy(name, lives)
    {
    }

    ~Goomba()
    {
        std::cout << "Goomba ";
    }

    void talk() const override
    {
        if (isDead())
        {
            std::cout << "Goomba " << name_
                      << " is dead." << std::endl;
            return;
        }

        std::cout << "Goomba " << name_
                  << " says 'Grrr...'" << std::endl;
    }

    void attack() const override
    {
        if (isDead())
        {
            std::cout << "Goomba " << name_
                      << " is dead." << std::endl;
            return;
        }

        std::cout << "Goomba " << name_
                  << " attacks by charging forward!"
                  << std::endl;
    }
};

class Bowser : public Enemy
{
public:
    Bowser(const std::string &name, int lives)
        : Enemy(name, lives)
    {
    }

    ~Bowser()
    {
        std::cout << "Bowser ";
    }

    void talk() const override
    {
        if (isDead())
        {
            std::cout << "Bowser " << name_
                      << " is dead." << std::endl;
            return;
        }

        std::cout << "Bowser " << name_
                  << " says 'Roar! You cannot defeat me!'"
                  << std::endl;
    }

    void attack() const override
    {
        if (isDead())
        {
            std::cout << "Bowser " << name_
                      << " is dead." << std::endl;
            return;
        }

        std::cout << "Bowser " << name_
                  << " attacks by breathing fire!"
                  << std::endl;
    }
};

int main()
{
    Enemy *enemies[5] = {
        new Koopa("Kenny", 3),
        new Goomba("Gary", 2),
        new Koopa("Kira", 1),
        new Goomba("Gina", 4),
        new Bowser("Bowser", 10)};

    for (int i = 0; i < 5; i++)
    {
        enemies[i]->talk();
        enemies[i]->attack();

        std::cout << "Lives before damage: "
                  << enemies[i]->getLives()
                  << std::endl;

        enemies[i]->takeDamage(3);

        std::cout << "Lives after damage: "
                  << enemies[i]->getLives()
                  << std::endl;

        enemies[i]->talk();
        enemies[i]->attack();

        std::cout << "------" << std::endl;
    }

    for (int i = 0; i < 5; i++)
    {
        delete enemies[i];
        enemies[i] = nullptr;
    }

    return 0;
}