#include <iostream>

class Animal {
public:
// we use virtual to allow the function to be overrriden

    virtual void sound() {
        std::cout << "Some sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Woof" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        std::cout << "Meow" << std::endl;
    }
};

int main() {
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animal1->sound();
    animal2->sound();

    delete animal1;
    delete animal2;

    return 0;
}
