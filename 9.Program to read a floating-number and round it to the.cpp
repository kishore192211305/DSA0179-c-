#include <iostream>
#include <cmath>

int main() {
    // Declare variables
    double floatingNumber;

    // Read a floating-point number from the user
    std::cout << "Enter a floating-point number: ";
    std::cin >> floatingNumber;

    // Round the number using floor and ceil functions
    int roundedFloor = static_cast<int>(std::floor(floatingNumber));
    int roundedCeil = static_cast<int>(std::ceil(floatingNumber));

    // Display the results
    std::cout << "Original number: " << floatingNumber << std::endl;
    std::cout << "Rounded to the nearest integer using floor: " << roundedFloor << std::endl;
    std::cout << "Rounded to the nearest integer using ceil: " << roundedCeil << std::endl;

    return 0;
}
