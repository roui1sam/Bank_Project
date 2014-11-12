#ifndef Bank_h
#define Bank_h

#include "Account.h"
#include "Customer.h"
#include <vector>

using namespace std;

class Bank
{
public:
	//Getters
	vector<Customer> getCustomers();
	vector<Account> getAccounts();

	//Setters
	void setCustomer(Customer);
	void setAccount(Account);

private:
	vector<Customer> customers;
	vector<Account> accounts;
};

#endif