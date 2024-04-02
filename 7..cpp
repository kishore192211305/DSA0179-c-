#include <iostream>

// Base class Vehicle
class Vehicle {
public:
    // Virtual function drive (to be overridden by derived classes)
    virtual void drive() const = 0;
};

// Derived class Car
class Car : public Vehicle {
public:
    // Override drive function for Car
    void drive() const override {
        std::cout << "Car is being driven." << std::endl;
    }
};

// Derived class Truck
class Truck : public Vehicle {
public:
    // Override drive function for Truck
    void drive() const override {
        std::cout << "Truck is being driven." << std::endl;
    }
};

int main() {
    // Create objects of Car and Truck
    Car car;
    Truck truck;

    // Call drive function for Car and Truck objects
    car.drive();   // Output: Car is being driven.
    truck.drive(); // Output: Truck is being driven.

    return 0;
}
