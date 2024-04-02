#include <iostream>
#include <stdexcept>

// Function that might throw an exception
void performOperation(int value) {
    if (value == 0) {
        throw std::runtime_error("Cannot divide by zero");
    } else {
        std::cout << "Result: " << 10 / value << std::endl;
    }
}

int main() {
    try {
        // Call the function that might throw an exception
        performOperation(0);
    } catch (const std::runtime_error& e) {
        // Handle the exception
        std::cerr << "Exception caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        // Handle other exceptions
        std::cerr << "Generic exception caught: " << e.what() << std::endl;
    }

    return 0;
}
