#include <iostream>

// Base class Shape
class Shape {
public:
    // Virtual function to calculate area (to be overridden by derived classes)
    virtual double area() const = 0;

    // Virtual function to calculate volume (to be overridden by derived classes)
    virtual double volume() const = 0;
};

// Derived class Sphere
class Sphere : public Shape {
private:
    double radius;

public:
    // Constructor
    Sphere(double r) : radius(r) {}

    // Override area function for Sphere
    double area() const override {
        return 4 * 3.14159265 * radius * radius;
    }

    // Override volume function for Sphere
    double volume() const override {
        return (4.0 / 3.0) * 3.14159265 * radius * radius * radius;
    }
};

// Derived class Cylinder
class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    // Constructor
    Cylinder(double r, double h) : radius(r), height(h) {}

    // Override area function for Cylinder
    double area() const override {
        return 2 * 3.14159265 * radius * (radius + height);
    }

    // Override volume function for Cylinder
    double volume() const override {
        return 3.14159265 * radius * radius * height;
    }
};

int main() {
    // Create objects of Sphere and Cylinder
    Sphere sphere(5.0);
    Cylinder cylinder(3.0, 7.0);

    // Calculate and display area and volume for each object
    std::cout << "Sphere - Area: " << sphere.area() << ", Volume: " << sphere.volume() << std::endl;
    std::cout << "Cylinder - Area: " << cylinder.area() << ", Volume: " << cylinder.volume() << std::endl;

    return 0;
}
