#include <iostream>
#include <stdexcept>

// Define a custom exception class derived from std::exception
class MyCustomException : public std::exception {
public:
    // Constructor with a custom error message
    MyCustomException(const char* message) : std::exception(message) {}
};

// Function that might throw the custom exception
void performOperation(int value) {
    if (value < 0) {
        // Throw the custom exception with a specific message
        throw MyCustomException("Negative values are not allowed");
    } else {
        std::cout << "Operation successful with value: " << value << std::endl;
    }
}

int main() {
    try {
        // Call the function that might throw the custom exception
        performOperation(-5);
    } catch (const MyCustomException& customException) {
        // Handle the custom exception
        std::cerr << "Custom exception caught: " << customException.what() << std::endl;
    } catch (const std::exception& generalException) {
        // Handle other exceptions
        std::cerr << "Exception caught: " << generalException.what() << std::endl;
    }

    return 0;
}
