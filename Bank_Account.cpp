//
// Created by User on 8/23/2024.
//
#include "Bank_Account.h"

#include <iostream>

Bank_Account::Bank_Account(const string &acc_number, const string &acc_holder_name,
                           const string &acc_type): acc_number(acc_number),
                           acc_holder_name(acc_holder_name), acc_type(acc_type), balance(0.0){}
void Bank_Account::deposit(double amount) {
    balance += amount;
}
void Bank_Account::withdraw(double amount) {
    if (amount <= balance){
        balance -= amount;
    } else {
        cerr << "Insufficient funds!" << endl;
    }
}
double Bank_Account::check_balance() const {
    return balance;
}
void Bank_Account::display_acc_details() const {
    cout << "Account Number: " << acc_number << endl;
    cout << "Account Holder: " << acc_holder_name << endl;
    cout << "Account Type: " << acc_type << endl;
    cout << "Balance: $" << balance << endl;
}

string Bank_Account::get_acc_number() const{
    return acc_number;
}