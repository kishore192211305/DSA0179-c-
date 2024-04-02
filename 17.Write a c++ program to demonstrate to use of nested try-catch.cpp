#include <iostream>
#include <stdexcept>

void innerFunction(int value) {
    try {
        if (value == 0) {
            throw std::logic_error("Inner function: Cannot divide by zero");
        } else {
            std::cout << "Inner function result: " << 10 / value << std::endl;
        }
    } catch (const std::exception& innerException) {
        std::cerr << "Inner function caught exception: " << innerException.what() << std::endl;
        // Rethrow the exception to the outer catch block
        throw;
    }
}

void outerFunction(int value) {
    try {
        innerFunction(value);
    } catch (const std::exception& outerException) {
        std::cerr << "Outer function caught exception: " << outerException.what() << std::endl;
    }
}

int main() {
    try {
        // Call the outer function with a value that leads to an exception
        outerFunction(0);
    } catch (const std::exception& mainException) {
        std::cerr << "Main function caught exception: " << mainException.what() << std::endl;
    }

    return 0;
}
