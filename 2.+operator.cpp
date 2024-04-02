#include <iostream>

class Number {
private:
    int value;

public:
    Number() : value(0) {}

    Number(int val) : value(val) {}

    Number operator+(const Number& other) {
        Number result;
        result.value = this->value + other.value;
        return result;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    Number sum = num1 + num2;

    std::cout << "Sum: " << sum.getValue() << std::endl;

    return 0;
}