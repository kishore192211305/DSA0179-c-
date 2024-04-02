#include <iostream>

// Base class Animal
class Animal {
public:
    // Virtual function speak (to be overridden by derived classes)
    virtual void speak() const = 0;
};

// Derived class Cat
class Cat : public Animal {
public:
    // Override speak function for Cat
    void speak() const override {
        std::cout << "Meow!" << std::endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    // Override speak function for Dog
    void speak() const override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    // Create objects of Cat and Dog
    Cat cat;
    Dog dog;

    // Call speak function for Cat and Dog objects
    cat.speak(); // Output: Meow!
    dog.speak(); // Output: Woof!

    return 0;
}
