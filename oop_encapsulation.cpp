#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private veri üyeleri

public:
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance must be positive!" << endl;
        }
    }

    // Depozito fonksiyonu
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Çekme fonksiyonu
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds!" << endl;
        }
    }

    // Bakiyeyi gösteren fonksiyon
    void displayBalance() const {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000);  // Hesap açıldı

    account.displayBalance();

    account.deposit(500);  // Para yatırma
    account.displayBalance();

    account.withdraw(300);  // Para çekme
    account.displayBalance();

    account.withdraw(2000);  // Yetersiz bakiye
    account.displayBalance();

    return 0;
}
