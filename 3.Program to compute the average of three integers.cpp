#include <iostream>

int main() {
    // Declare variables to store user input
    int num1, num2, num3;

    // Read three integers from the user
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    std::cout << "Enter the third integer: ";
    std::cin >> num3;

    // Calculate the average
    double average = static_cast<double>(num1 + num2 + num3) / 3;

    // Display the result
    std::cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << std::endl;

    return 0;
}
