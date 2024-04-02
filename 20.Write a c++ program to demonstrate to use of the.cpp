#include <iostream>
#include <stdexcept>

// Function that throws a custom exception
void performOperation(int value) {
    if (value < 0) {
        // Throw a custom exception with a specific message
        throw std::runtime_error("Negative values are not allowed");
    } else {
        std::cout << "Operation successful with value: " << value << std::endl;
    }
}

int main() {
    try {
        // Call the function that might throw a custom exception
        performOperation(-5);
    } catch (const std::runtime_error& customException) {
        // Handle the custom exception
        std::cerr << "Exception caught: " << customException.what() << std::endl;
    } catch (const std::exception& generalException) {
        // Handle other exceptions
        std::cerr << "Exception caught: " << generalException.what() << std::endl;
    }

    return 0;
}
