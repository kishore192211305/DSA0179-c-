#include <iostream>

// Base class Shape
class Shape {
public:
    // Virtual function to calculate area (to be overridden by derived classes)
    virtual double area() const = 0;

    // Virtual function to calculate perimeter (to be overridden by derived classes)
    virtual double perimeter() const = 0;
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

    // Override perimeter function for Rectangle
    double perimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Override area function for Triangle
    double area() const override {
        // Using Heron's formula to calculate the area of a triangle
        double s = (side1 + side2 + side3) / 2;
        return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Override perimeter function for Triangle
    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    // Create objects of Rectangle and Triangle
    Rectangle rectangle(4.0, 5.0);
    Triangle triangle(3.0, 4.0, 5.0);

    // Calculate and display area and perimeter for each object
    std::cout << "Rectangle - Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Triangle - Area: " << triangle.area() << ", Perimeter: " << triangle.perimeter() << std::endl;

    return 0;
}
