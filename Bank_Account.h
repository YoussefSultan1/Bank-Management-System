//
// Created by User on 8/23/2024.
//

#ifndef BANK_MANAGEMENT_SYSTEM_BANK_ACCOUNT_H
#define BANK_MANAGEMENT_SYSTEM_BANK_ACCOUNT_H

#include <fstream>
#include <string>

using namespace std;

class Bank_Account {
private:
    string acc_number;
    string acc_holder_name;
    double balance;
    string acc_type;

public:
    Bank_Account(const string &acc_number, const string &acc_holder_name,
                 const string &acc_type);
    void deposit(double amount);
    void withdraw(double amount);
    double check_balance() const;
    void display_acc_details() const;
    string get_acc_number() const;
};

#endif //BANK_MANAGEMENT_SYSTEM_BANK_ACCOUNT_H
