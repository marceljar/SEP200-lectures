#include <iostream>
#include <string>

using namespace std;

class Enemy {
protected:
    string name_;

public:
    Enemy(const string& name) : name_(name) {}
    virtual ~Enemy() {
        cout << name_ << " destroyed." << endl;
    };

    virtual void talk() const = 0;
    virtual void attack() const = 0;
};

class Koopa : public Enemy {
public:
    Koopa(const string& name) : Enemy(name) {}
    ~Koopa() { 
        cout << "Koopa ";
    }

    void talk() const override {
        cout << "Koopa " << name_ << " says 'Grrr...'\n";
    }

    void attack() const override {
        cout << "Koopa " << name_ << " attacks by kicking its shell!\n";
    }
};

class Goomba : public Enemy {
public:
    Goomba(const string& name) : Enemy(name) {}
    ~Goomba() { 
        cout << "Goomba ";
    }

    void talk() const override {
        cout << "Goomba " << name_ << " says 'Grrr...'\n";
    }

    void attack() const override {
        cout << "Goomba " << name_ << " attacks by charging forward!\n";
    }
};

int main() {
    Enemy* enemies[5] = {new Koopa("Kenny"), new Goomba("Gary"), new Koopa("Kira"), new Goomba("Gina"), new Goomba("Gus")};

    for (int i = 0; i < 5; i++) {
        enemies[i]->talk();
        enemies[i]->attack();
        cout << "----\n";
    }

    for (int i = 0; i < 5; i++) {
        delete enemies[i];
        enemies[i] = nullptr;
    }

    return 0;
}
