#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
        cout << "Account " << accountNumber << " created with balance $" << balance << endl;
    }


    ~BankAccount() {
        cout << "Account " << accountNumber << " closed. Final balance was $" << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " into account " << accountNumber << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << " from account " << accountNumber << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal." << endl;
        }
    }

    
    void displayAccount() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    
    BankAccount account1(12345, 1000.00);

    
    account1.displayAccount();


    account1.deposit(500.00);
    account1.withdraw(200.00);

    
    account1.displayAccount();

    

    return 0;
}

