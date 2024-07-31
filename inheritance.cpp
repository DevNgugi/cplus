#include <iostream>

class Vehicle {
public:
    std::string brand = "Ford";

    void honk() {
        std::cout << "Honk! Honk!" << std::endl;
    }
};

class Car : public Vehicle {
public:
    std::string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    std::cout << myCar.brand + " " + myCar.model << std::endl;

    return 0;
}
