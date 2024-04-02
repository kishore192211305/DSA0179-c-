#include <iostream>

int main() {
    // Declare variables
    int firstNumber, secondNumber;

    // Read two numbers from the user
    std::cout << "Enter the first integer: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second integer: ";
    std::cin >> secondNumber;

    // Determine the greater number
    if (firstNumber > secondNumber) {
        std::cout << "The first number (" << firstNumber << ") is greater than the second number (" << secondNumber << ")." << std::endl;
    } else if (secondNumber > firstNumber) {
        std::cout << "The second number (" << secondNumber << ") is greater than the first number (" << firstNumber << ")." << std::endl;
    } else {
        std::cout << "Both numbers are equal." << std::endl;
    }

    return 0;
}
