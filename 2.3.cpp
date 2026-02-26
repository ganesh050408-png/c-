#include<iostream>
using namespace std;

class Account
{
private:
    string name;
    int accountID;
    double balance;

public:

    // 🔹 Constructor 1 (Zero Balance)
    Account()
    {
        name = "Default";
        accountID = 0;
        balance = 0;
    }

    // 🔹 Constructor 2 (Custom Initial Balance)
    Account(string n, int id, double b)
    {
        name = n;
        accountID = id;

        if(b >= 0)
            balance = b;
        else
            balance = 0;
    }

    // 🔹 Deposit Function
    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Deposit Successful\n";
        }
        else
        {
            cout << "Invalid Deposit Amount\n";
        }
    }

    // 🔹 Withdraw Function (No Overdraft Allowed)
    void withdraw(double amount)
    {
        if(amount <= 0)
        {
            cout << "Invalid Withdrawal Amount\n";
        }
        else if(amount > balance)
        {
            cout << "Withdrawal Failed! Insufficient Balance\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal Successful\n";
        }
    }

    // 🔹 Display Account Summary
    void display()
    {
        cout << "\nAccount Summary";
        cout << "\nCustomer Name: " << name;
        cout << "\nAccount ID: " << accountID;
        cout << "\nCurrent Balance: " << balance;
        cout << "\n--------------------------";
    }
};

int main()
{
    int n;
    cout << "Enter number of accounts to create: ";
    cin >> n;

    Account accounts[100];

    // 🔹 Creating Accounts
    for(int i = 0; i < n; i++)
    {
        string name;
        int id;
        double bal;

        cout << "\nEnter details for Account " << i+1 << endl;
        cout << "Customer Name: ";
        cin >> name;

        cout << "Account ID: ";
        cin >> id;

        cout << "Initial Balance: ";
        cin >> bal;

        accounts[i] = Account(name, id, bal);
    }

    // 🔹 Simulate Transactions
    for(int i = 0; i < n; i++)
    {
        double dep, wit;

        cout << "\nTransactions for Account ID " << i+1 << endl;

        cout << "Enter Deposit Amount: ";
        cin >> dep;
        accounts[i].deposit(dep);

        cout << "Enter Withdrawal Amount: ";
        cin >> wit;
        accounts[i].withdraw(wit);
    }

    // 🔹 Display Final Summary
    cout << "\n\nFinal Account Summaries:\n";
    for(int i = 0; i < n; i++)
    {
        accounts[i].display();
    }

    return 0;
}