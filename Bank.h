//
// Created by User on 8/23/2024.
//

#ifndef BANK_MANAGEMENT_SYSTEM_BANK_H
#define BANK_MANAGEMENT_SYSTEM_BANK_H

#include "Bank_Account.h"
#include <vector>
#include <fstream>

using namespace std;

class Bank {
private:
    vector<Bank_Account> accounts;
public:
    Bank(const string &file_name);
    ~Bank();
    void create_acc(const string &name, const string &acc_type);
    Bank_Account* get_acc(const string &acc_number);
    void display_all_acc() const;
};

#endif //BANK_MANAGEMENT_SYSTEM_BANK_H
