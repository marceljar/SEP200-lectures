
#include <iostream>
#include <string>

class Automobile {
protected:
    std::string brand_;
    int maxSpeed_;

public:
    Automobile(const std::string& b, int speed)
        : brand_(b), maxSpeed_(speed) {
            std::cout << "Base constructor called" << std::endl;
        }
    
    ~Automobile(){
        std::cout << "Base destructor called" << std::endl;
    }

    // set as pure virtual, making the whole class abstract
    virtual void displayInfo() const = 0;

    // returning a const reference
    const int& getMaxSpeed() const {
        return maxSpeed_;
    }
};

// declared outside because it is pure virtual now
void Automobile::displayInfo() const {
    std::cout << "Brand: " << brand_
                << ", Max Speed: " << maxSpeed_ << " km/h\n";
}


class Car : public Automobile {
private:
    int numberOfDoors_;

public:
    Car(const std::string& b, int speed, int doors)
        : Automobile(b, speed), numberOfDoors_(doors) {
           std::cout << "Derived constructor called" << std::endl;
        }
    
    ~Car(){
        std::cout << "Derived destructor called" << std::endl;
    }

    // shadowing the base displayInfo() function
    void displayInfo() const override {
        Automobile::displayInfo();
        std::cout << "Doors: " << numberOfDoors_ << std::endl;
    }
};

// passing value by const reference
void simpleFunction(const int & a) {
    std::cout << "You gave me: " << a << std::endl;
}

int main() {
    Car myCar("Toyota", 180, 4);
    const Car myOtherCar("Honda", 160, 2);

    myCar.displayInfo();
    myOtherCar.displayInfo();

    int x = 5;
    simpleFunction(x);
    
    return 0;
}
