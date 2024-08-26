#include "Bank.h"
#include <iostream>
#include <string>
using namespace std;

void display_menu() {
    cout << "1. Create Account" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Check Balance" << endl;
    cout << "5. View Account Details" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}
void handle_user_input(Bank &bank) {
    int choice;
    cin >> choice;

    string name, acc_type, acc_number;
    double amount;
    Bank_Account* account;

    switch (choice) {
        case 1:
            cout << "Enter Account Holder Name: ";
            cin >> name;
            cout << "Enter Account Type (Savings/Checking): ";
            cin >> acc_type;
            bank.create_acc(name, acc_type);
            break;
        case 2:
            cout << "Enter Account Number: ";
            cin >> acc_number;
            account = bank.get_acc(acc_number);
            if (account) {
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                account->deposit(amount);
                cout << "Amount deposited successfully." << endl;
            } else {
                cout << "Account not found!" << endl;
            }
            break;
        case 3:
            cout << "Enter Account Number: ";
            cin >> acc_number;
            account = bank.get_acc(acc_number);
            if (account) {
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;
                account->withdraw(amount);
            } else {
                cout << "Account not found!" << endl;
            }
            break;
        case 4:
            std::cout << "Enter Account Number: ";
            std::cin >> acc_number;
            account = bank.get_acc(acc_number);
            if (account) {
                cout << "Current Balance: $" << account->check_balance() << endl;
            } else {
                cout << "Account not found!" << endl;
            }
            break;
        case 5:
            cout << "Enter Account Number: ";
            cin >> acc_number;
            account = bank.get_acc(acc_number);
            if (account) {
                account->display_acc_details();
            } else {
                cout << "Account not found!" << endl;
            }
            break;
        case 6:
            cout << "Exiting..." << endl;
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}

int main() {
    Bank bank("accounts.txt");
    while (true) {
        display_menu();
        handle_user_input(bank);
    }
}
