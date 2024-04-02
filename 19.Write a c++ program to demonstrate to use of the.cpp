#include <iostream>
#include <stdexcept>

// Function that might throw a runtime_error
void performOperation(int value) {
    if (value == 0) {
        // Throw a runtime_error with a specific message
        throw std::runtime_error("Cannot divide by zero");
    } else {
        std::cout << "Operation successful with value: " << 10 / value << std::endl;
    }
}

int main() {
    try {
        // Call the function that might throw a runtime_error
        performOperation(0);
    } catch (const std::runtime_error& runtimeError) {
        // Handle the runtime_error
        std::cerr << "Exception caught: " << runtimeError.what() << std::endl;
    } catch (const std::exception& generalException) {
        // Handle other exceptions
        std::cerr << "Exception caught: " << generalException.what() << std::endl;
    }

    return 0;
}
