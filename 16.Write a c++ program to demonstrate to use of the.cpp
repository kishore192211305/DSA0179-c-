#include <iostream>

void riskyOperation() {
    // Simulating a risky operation that might throw an exception
    throw std::runtime_error("An error occurred during the risky operation");
}

int main() {
    try {
        // Attempt the risky operation
        riskyOperation();
    } catch (const std::exception& e) {
        // Handle the exception
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } finally {
        // Cleanup code that will be executed regardless of whether an exception was thrown or not
        std::cout << "Cleanup code in the finally block" << std::endl;
    }

    // Continue with the rest of the program
    std::cout << "Program continues after the try-catch-finally block" << std::endl;

    return 0;
}
