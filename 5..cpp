#include <iostream>

// Base class Person
class Person {
public:
    // Virtual function greet (to be overridden by derived classes)
    virtual void greet() const {
        std::cout << "Hello, I am a person." << std::endl;
    }
};

// Derived class Student
class Student : public Person {
public:
    // Override greet function for Student
    void greet() const override {
        std::cout << "Hi, I am a student." << std::endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    // Override greet function for Teacher
    void greet() const override {
        std::cout << "Hello, I am a teacher." << std::endl;
    }
};

int main() {
    // Create objects of Student and Teacher
    Student student;
    Teacher teacher;

    // Call greet function for Student and Teacher objects
    student.greet();  // Output: Hi, I am a student.
    teacher.greet();  // Output: Hello, I am a teacher.

    return 0;
}
