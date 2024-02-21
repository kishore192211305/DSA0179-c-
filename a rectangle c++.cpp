#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
        std::cout << "Rectangle created with length " << length << " and width " << width << std::endl;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle destroyed with length " << length << " and width " << width << std::endl;
    }

    // Other member functions can be added here
};

int main() {
    // Creating a Rectangle object
    Rectangle myRectangle(5.0, 3.0);

    // The object will be automatically destroyed when it goes out of scope
    return 0;
}

