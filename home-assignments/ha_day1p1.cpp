#include <iostream>
#include <string>
using namespace std;

// Class for bank account
class BankAccount 
{
private:
    string depositorName;
    int accountNumber;
    double balance;

public:
    // Member fn for initial values
    void initialize(string name, int accNo, double initialBalance) 
    {
        depositorName = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Member fn - deposit
    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } else 
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Member fn - withdraw
    void withdraw(double amount) 
    {
        if (amount <= balance && amount > 0) 
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } else 
        {
            cout << "Insufficient balance or invalid withdrawal amount.\n";
        }
    }

    // Member fn - display name and balance
    void display() const 
    {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter the number of customers: ";
    cin >> n;

    BankAccount customers[n];  // Array of BankAccount objects

    // Initialize each customer's account
    for (int i = 0; i < n; ++i) 
    {
        string name;
        int accNo;
        double initialBalance;

        cout << "\nEnter details for customer " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Account Number: ";
        cin >> accNo;
        cout << "Initial Balance: ";
        cin >> initialBalance;

        customers[i].initialize(name, accNo, initialBalance);
    }

    int choice, customerIndex;
    double amount;

    // Menu
    do 
    {
        cout << "\nMenu:\n";
        cout << "1. Deposit Amount\n";
        cout << "2. Withdraw Amount\n";
        cout << "3. Display Account Info\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) 
        {
            cout << "Enter customer number (1 to " << n << "): ";
            cin >> customerIndex;
            if (customerIndex < 1 || customerIndex > n) 
            {
                cout << "Invalid customer number.\n";
                continue;
            }
        }

        switch (choice) 
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            customers[customerIndex - 1].deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            customers[customerIndex - 1].withdraw(amount);
            break;
        case 3:
            customers[customerIndex - 1].display();
            break;
        case 4:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } 
      while (choice != 4);

    return 0;
}
