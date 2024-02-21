#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    // Constructor
    Book(std::string bookTitle, std::string bookAuthor, int publicationYear) {
        title = bookTitle;
        author = bookAuthor;
        year = publicationYear;
        std::cout << "Book \"" << title << "\" by " << author << " published in " << year << " is created." << std::endl;
    }

    // Destructor
    ~Book() {
        std::cout << "Book \"" << title << "\" by " << author << " published in " << year << " is destroyed." << std::endl;
    }

    // Other member functions can be added here
};

int main() {
    // Creating a Book object
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 1925);

    // The object will be automatically destroyed when it goes out of scope
    return 0;
}

