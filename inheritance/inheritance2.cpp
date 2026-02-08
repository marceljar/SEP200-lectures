
#include <iostream>
#include <string>

class Automobile
{
protected:
    std::string brand_;
    int maxSpeed_;

public:
    Automobile(const std::string &b, int speed)
        : brand_(b), maxSpeed_(speed) {}

    void displayInfo() const
    {
        std::cout << "Brand: " << brand_
                  << ", Max Speed: " << maxSpeed_ << " km/h\n";
    }
};

class Car : public Automobile
{
private:
    int numberOfDoors_;

public:
    Car(const std::string &b, int speed, int doors)
        : Automobile(b, speed), numberOfDoors_(doors) {}

    // shadowing the base displayInfo() function
    void displayInfo() const
    {
        Automobile::displayInfo();
        std::cout << "Doors: " << numberOfDoors_ << std::endl;
    }
};

int main()
{
    Car myCar("Toyota", 180, 4);
    myCar.Automobile::displayInfo();

    return 0;
}
