#include <iostream>

// User-defined class representing a Point in 2D space
class Point {
private:
    int x, y;

public:
    // Constructor to initialize Point object with coordinates (x, y)
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    // Overloading the == operator to compare two Point objects for equality
    bool operator==(const Point& other) const {
        return (x == other.x && y == other.y);
    }

    // Function to display the coordinates of the Point
    void display() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    // Creating two Point objects
    Point p1(3, 4);
    Point p2(3, 4);
    Point p3(5, 6);

    // Comparing Point objects using the overloaded == operator
    std::cout << "Point p1: ";
    p1.display();
    std::cout << std::endl;

    std::cout << "Point p2: ";
    p2.display();
    std::cout << std::endl;

    std::cout << "Point p3: ";
    p3.display();
    std::cout << std::endl;

    if (p1 == p2) {
        std::cout << "p1 and p2 are equal\n";
    } else {
        std::cout << "p1 and p2 are not equal\n";
    }

    if (p1 == p3) {
        std::cout << "p1 and p3 are equal\n";
    } else {
        std::cout << "p1 and p3 are not equal\n";
    }

    return 0;
}
