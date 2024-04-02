#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    void operator++() {
        ++count;
    }

    int getCount() {
        return count;
    }
};

int main() {
    Counter c;

    std::cout << "Initial count: " << c.getCount() << std::endl;

    ++c; // Increment using overloaded ++
    std::cout << "Count after increment: " << c.getCount() << std::endl;

    return 0;
}