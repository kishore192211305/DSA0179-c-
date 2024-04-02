#include <iostream>
#include <string>
using namespace std;

// Function to count the number of elements in a string
int countElements(const string& str) {
    return str.length();
}

int main() {
    string inputStr;
    cout << "Enter a string: ";
    getline(cin, inputStr);

    int count = countElements(inputStr);
    
    cout << "Number of elements in the string: " << count << endl;
    
    return 0;
}