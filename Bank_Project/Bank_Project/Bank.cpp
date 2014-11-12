#include "Bank.h"

//Getters
vector<Customer> Bank::getCustomers() { return customers; }

vector<Account> Bank::getAccounts() { return accounts; }

//Setters
void Bank::setCustomer(Customer CUSTOMER) { customers.push_back(CUSTOMER); }

void Bank::setAccount(Account ACCOUNT) { accounts.push_back(ACCOUNT); }