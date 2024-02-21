#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Constructor
    Car(std::string carMake, std::string carModel, int carYear) {
        make = carMake;
        model = carModel;
        year = carYear;
        std::cout << "A " << year << " " << make << " " << model << " is created." << std::endl;
    }

    // Destructor
    ~Car() {
        std::cout << "A " << year << " " << make << " " << model << " is destroyed." << std::endl;
    }

    // Other member functions can be added here
};

int main() {
    // Creating a Car object
    Car myCar("Toyota", "Camry", 2022);

    // The object will be automatically destroyed when it goes out of scope
    return 0;
}

