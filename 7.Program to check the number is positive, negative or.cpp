#include <iostream>

int main() {
    // Declare variable
    double number;

    // Read a number from the user
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check whether the number is positive, negative, or zero
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}
