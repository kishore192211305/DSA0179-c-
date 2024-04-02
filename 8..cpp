#include <iostream>

// Base class Employee
class Employee {
public:
    // Virtual function calculatePay (to be overridden by derived classes)
    virtual double calculatePay() const = 0;
};

// Derived class Manager
class Manager : public Employee {
public:
    // Override calculatePay function for Manager
    double calculatePay() const override {
        // Manager's salary calculation logic
        return 5000.0; // Example salary for a manager
    }
};

// Derived class Engineer
class Engineer : public Employee {
public:
    // Override calculatePay function for Engineer
    double calculatePay() const override {
        // Engineer's salary calculation logic
        return 4000.0; // Example salary for an engineer
    }
};

int main() {
    // Create objects of Manager and Engineer
    Manager manager;
    Engineer engineer;

    // Call calculatePay function for Manager and Engineer objects
    std::cout << "Manager's pay: $" << manager.calculatePay() << std::endl;
    std::cout << "Engineer's pay: $" << engineer.calculatePay() << std::endl;

    return 0;
}
