#include <iostream>

// Base class Animal
class Animal {
public:
    // Virtual function eat
    virtual void eat() {
        std::cout << "Animal is eating." << std::endl;
    }
};

// Derived class Herbivore
class Herbivore : public Animal {
public:
    // Override eat function for Herbivore
    void eat() override {
        std::cout << "Herbivore is eating plants." << std::endl;
    }
};

// Derived class Carnivore
class Carnivore : public Animal {
public:
    // Override eat function for Carnivore
    void eat() override {
        std::cout << "Carnivore is eating meat." << std::endl;
    }
};

int main() {
    // Create objects of Herbivore and Carnivore
    Herbivore herbivore;
    Carnivore carnivore;

    // Call eat function for Herbivore and Carnivore objects
    herbivore.eat();  // Output: Herbivore is eating plants.
    carnivore.eat();  // Output: Carnivore is eating meat.

    return 0;
}
