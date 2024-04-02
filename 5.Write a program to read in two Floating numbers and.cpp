#include <iostream>

int main() {
    // Declare variables to store user input
    double num1, num2;

    // Read two floating-point numbers from the user
    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;

    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;

    // Perform operations and display results
    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << "Difference: " << num1 - num2 << std::endl;
    std::cout << "Product: " << num1 * num2 << std::endl;

    // Check if the second number is not zero before performing division and modulo
    if (num2 != 0) {
        std::cout << "Quotient: " << num1 / num2 << std::endl;
        std::cout << "Remainder: Not applicable for floating-point numbers." << std::endl;
    } else {
        std::cout << "Cannot perform division because the second number is zero." << std::endl;
    }

    return 0;
}
