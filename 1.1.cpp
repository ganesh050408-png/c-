#include <iostream>
using namespace std;

class Wallet {
private:
    int walletID;
    string userName;
    double balance;

public:
    // Constructor
    Wallet(int id, string name, double initialBalance) {
        walletID = id;
        userName = name;
        balance = initialBalance;
    }

    // Load Money
    void loadMoney(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Money loaded successfully!\n";
        } else {
            cout << "Invalid amount!\n";
        }
    }

    // Transfer Money
    void transferMoney(Wallet &receiver, double amount) {
        if (amount <= 0) {
            cout << "Invalid transfer amount!\n";
        }
        else if (amount > balance) {
            cout << "Error: Insufficient balance!\n";
        }
        else {
            balance -= amount;
            receiver.balance += amount;
            cout << "Transfer successful!\n";
        }
    }

    // Display Wallet Details
    void displayDetails() {
        cout << "\nWallet ID: " << walletID << endl;
        cout << "User Name: " << userName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {

    Wallet user1(101, "Shyam", 5000);
    Wallet user2(102, "Rahul", 2000);

    user1.loadMoney(1000);
    user1.transferMoney(user2, 3000);

    user1.displayDetails();
    user2.displayDetails();

    return 0;
}