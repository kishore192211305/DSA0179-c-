#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(std::string accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
        std::cout << "Account created with account number " << accountNumber << " and initial balance " << balance << std::endl;
    }

    // Destructor
    ~BankAccount() {
        std::cout << "Account with account number " << accountNumber << " is destroyed" << std::endl;
    }

    // Other member functions can be added here
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount("123456789", 1000.0);

    // The object will be automatically destroyed when it goes out of scope
    return 0;
}

