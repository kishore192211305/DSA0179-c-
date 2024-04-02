#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int d) : data(d) {}

    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Data: " << obj.data;
        return os;
    }
};

int main() {
    MyClass obj(42);
    std::cout << obj << std::endl;
    return 0;
}