#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance = 0;

public:
    void deposit(float amount) {
        balance += amount;
    }
    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance\n";
    }
    void showBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(500);
    acc.withdraw(200);
    acc.showBalance();
    return 0;
}
