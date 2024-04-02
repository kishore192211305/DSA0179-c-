#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double celsius, fahrenheit;

    // Convert Celsius to Fahrenheit
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = celsiusToFahrenheit(celsius);
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    // Convert Fahrenheit to Celsius
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = fahrenheitToCelsius(fahrenheit);
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}