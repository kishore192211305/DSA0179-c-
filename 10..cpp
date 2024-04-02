#include <iostream>

// Base class Shape
class Shape {
public:
    // Virtual function area (to be overridden by derived classes)
    virtual double area() const = 0;
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override area function for Rectangle
    double area() const override {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override area function for Circle
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Create objects of Rectangle and Circle
    Rectangle rectangle(4.0, 5.0);
    Circle circle(3.0);

    // Calculate and display area for each object
    std::cout << "Rectangle Area: " << rectangle.area() << std::endl;
    std::cout << "Circle Area: " << circle.area() << std::endl;

    return 0;
}
