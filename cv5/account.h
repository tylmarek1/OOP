#include <iostream>
#include "client.h"

class Account
{
private:
	int number;
	double balance;
	double interestRate;

	Client* owner;
	Client* partner;
public:
	Account(int n, Client* c) {
		number = n;
		owner = c;
		partner = nullptr;
		interestRate = 0;
		balance = 0;
	}
	Account(int n, Client* c, double ir) {
		number = n;
		owner = c;
		partner = nullptr;
		interestRate = ir;
		balance = 0;
	}
	Account(int n, Client* c, Client *p) {
		number = n;
		owner = c;
		partner = p;
		interestRate = 0;
		balance = 0;
	}
	Account(int n, Client* c, Client* p, double ir) {
		number = n;
		owner = c;
		partner = p;
		interestRate = ir;
		balance = 0;
	}

	int GetNumber() {
		return number;
	}
	double GetBalance() {
		return balance;
	}
	double GetInterestRate() {
		return interestRate;
	}
	Client* GetOwner() {
		return owner;
	}
	Client* GetPartner() {
		return partner;
	}
	bool CanWithdraw(double a) {
		return balance > a;
	}
	void Deposit(double a) {
		balance += a;
	}
	bool Withdraw(double a) {
		if (!CanWithdraw(a)) return false;
		balance -= a;
	}
	void AddInterest() {
		balance *= ((interestRate) * 0.01)+1;
	}
};