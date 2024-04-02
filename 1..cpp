#include <iostream>

// Base class Person
class Person {
public:
    // Virtual function work
    virtual void work() {
        std::cout << "Person is working" << std::endl;
    }
};

// Derived class Employee from Person
class Employee : public Person {
public:
    // Override work function for Employee
    void work() override {
        std::cout << "Employee is working" << std::endl;
    }
};

// Derived class Manager from Person
class Manager : public Person {
public:
    // Override work function for Manager
    void work() override {
        std::cout << "Manager is working" << std::endl;
    }
};

int main() {
    Person person;
    Employee employee;
    Manager manager;

    // Polymorphic behavior: calling work() for each object
    person.work();    // Calls Person's work()
    employee.work();  // Calls Employee's work()
    manager.work();   // Calls Manager's work()

    return 0;
}