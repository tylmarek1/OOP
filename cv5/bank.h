#include "account.h"

class Bank
{
private:
	Client** clients;
	int clientsCount;

	Account** accounts;
	int accountsCount;
public:
	Bank(int c, int a) {
		clients = new Client* [100];
		clientsCount = c;
		accounts = new Account* [100];
		accountsCount = a;
	}
	~Bank() {
		for (int i = 0; i < accountsCount; i++) {
			if (accounts[i] != nullptr) delete accounts[i];
		}
		for (int i = 0; i < clientsCount; i++) {
			if (clients[i] != nullptr) delete clients[i];
		}
		delete[] clients;
		delete[] accounts;
	}

	Client* GetClient(int c) {
		if (c > clientsCount - 1) return nullptr;
		return clients[c];
	}
	Account* GetAccount(int n) {
		if (n > accountsCount - 1) return nullptr;
		return accounts[n];
	}

	Client* CreateClient(int c, std::string n) {
		clients[clientsCount] = new Client(c, n);
		clientsCount++;
		return clients[clientsCount - 1];
	}

	Account* CreateAccount(int n, Client* c) {
		accounts[accountsCount] = new Account(n, c);
		accountsCount++;
		return accounts[accountsCount - 1];
	}
	Account* CreateAccount(int n, Client* c, double ir) {
		accounts[accountsCount] = new Account(n, c, ir);
		accountsCount++;
		return accounts[accountsCount - 1];
	}
	Account* CreateAccount(int n, Client* c, Client* p) {
		accounts[accountsCount] = new Account(n, c, p);
		accountsCount++;
		return accounts[accountsCount - 1];
	}
	Account* CreateAccount(int n, Client* c, Client* p, double ir) {
		accounts[accountsCount] = new Account(n, c, p, ir);
		accountsCount++;
		return accounts[accountsCount - 1];
	}

	void AddInterest() {
		for (int i = 0; i < accountsCount; i++) {
			accounts[i]->AddInterest();
		}
	}

};