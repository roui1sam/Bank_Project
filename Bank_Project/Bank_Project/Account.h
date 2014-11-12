#ifndef Account_h
#define Account_h

#include "Date.h"
#include "Transaction.h"
#include "Customer.h"

using namespace std;

class Account
{
public:
	//Constructor
	Account();

	//Getters
	int getNumber() const;
	double getBalance() const;
	Customer getOwner() const;
	Date getDate() const;
	vector<Transaction> getTransactions() const;

	//Setters
	void setNumber(int);
	void setBalance(double);
	void setOwner(Customer);
	void setDate(Date);
	void setTransaction(Transaction);

private:
	int account_number;
	double balance;
	Customer owner;
	Date date_opened;
	vector<Transaction> transactions;
};

#endif