#include <iostream>
#include <stdexcept>

// Function that might throw different types of exceptions
void performOperation(int value) {
    if (value == 0) {
        throw std::logic_error("Cannot perform operation with value 0");
    } else if (value < 0) {
        throw std::runtime_error("Negative values are not allowed");
    } else {
        std::cout << "Operation successful with value: " << value << std::endl;
    }
}

int main() {
    try {
        // Call the function that might throw different types of exceptions
        performOperation(0);
    } catch (const std::logic_error& logicError) {
        // Handle logic_error
        std::cerr << "Logic error caught: " << logicError.what() << std::endl;
    } catch (const std::runtime_error& runtimeError) {
        // Handle runtime_error
        std::cerr << "Runtime error caught: " << runtimeError.what() << std::endl;
    } catch (const std::exception& generalException) {
        // Handle other types of exceptions
        std::cerr << "Exception caught: " << generalException.what() << std::endl;
    }

    return 0;
}
