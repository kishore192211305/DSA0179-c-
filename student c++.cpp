#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    // Constructor
    Student(std::string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
        std::cout << "Student " << name << " aged " << age << " is created." << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Student " << name << " aged " << age << " is destroyed." << std::endl;
    }

    // Other member functions can be added here
};

int main() {
    // Creating a Student object
    Student myStudent("Alice", 20);

    // The object will be automatically destroyed when it goes out of scope
    return 0;
}

