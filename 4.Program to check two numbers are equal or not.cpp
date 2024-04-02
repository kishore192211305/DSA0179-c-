#include <iostream>

int main() {
    // Declare variables to store user input
    int num1, num2;

    // Read two integers from the user
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Check if the numbers are equal
    if (num1 == num2) {
        std::cout << "The numbers " << num1 << " and " << num2 << " are equal." << std::endl;
    } else {
        std::cout << "The numbers " << num1 << " and " << num2 << " are not equal." << std::endl;
    }

    return 0;
}
