//
// Created by User on 8/23/2024.
//

#include "Bank.h"
#include <iostream>

void Bank::create_acc(const string &name, const string &acc_type) {
    string acc_number = "ACC" + to_string(accounts.size() + 1);
    Bank_Account newAcc(acc_number, name, acc_type);
    accounts.push_back(newAcc);
    cout << "Your account created successfully. Account Number: " << acc_number << endl;
}
Bank_Account* Bank::get_acc(const std::string &acc_number) {
    for (auto &account : accounts){
        if (account.get_acc_number() == acc_number){
            return &account;
        }
    }
    return nullptr;
}

void Bank::display_all_acc() const {
    for (const auto &account : accounts) {
        account.display_acc_details();
        cout << "----------------------------" << endl;
    }
}


