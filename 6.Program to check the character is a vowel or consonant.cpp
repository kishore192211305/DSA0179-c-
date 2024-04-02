#include <iostream>

int main() {
    // Declare a variable to store user input
    char ch;

    // Read a character from the user
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        std::cout << "The character " << ch << " is a vowel." << std::endl;
    } else {
        std::cout << "The character " << ch << " is a consonant." << std::endl;
    }

    return 0;
}
