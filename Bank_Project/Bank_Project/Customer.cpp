#include "Customer.h"
#include "Account.h"

//Default constructor

//Constructor

//Getters
int Customer::getId() const { return customer_id; }

int Customer::getSocial() const { return social_security; }

string Customer::getFirst() const { return first_name; }

string Customer::getLast() const { return last_name; }

string Customer::getAddress() const { return address; }

vector<Account> Customer::getAccounts() const { return accounts; }

//Setters
void Customer::setId(int ID) { customer_id = ID; }

void Customer::setSocial(int SSN) { social_security = SSN; }

void Customer::setFirst(string FIRST) { first_name = FIRST; }

void Customer::setLast(string LAST) { last_name = LAST; }

void Customer::setAddress(string ADDRESS) { address = ADDRESS; }

void Customer::setAccout(Account ACCOUNT) { accounts.push_back(ACCOUNT); }

//Operators