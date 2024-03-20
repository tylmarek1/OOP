#include "bank.h"

int main() {
	Bank myBank(0, 0);
	int cCount = 20;
	for (int i = 0; i < cCount; i++)
	{
		int cid = 1000 + i;
		std::string cname = "cname" + std::to_string(cid);
		myBank.CreateClient(cid, cname);
	}
	for (int i = 0; i < cCount; i++)
	{
		std::cout << "id: " << myBank.GetClient(i)->GetCode() << " - name: " << myBank.GetClient(i)->GetNAme() << std::endl;
	}

	std::cout << std::endl;

	int aCount = cCount / 2;

	int y = 0;
	for (int i = 0; i < aCount; i++)
	{
		int aid = 5000 + i;
		myBank.CreateAccount(aid, myBank.GetClient(y), myBank.GetClient(y+1), 2.5);
		y += 2;
	}
	myBank.GetAccount(2)->Deposit(10000);
	myBank.AddInterest();
	for (int i = 0; i < aCount; i++)
	{
		std::cout << "id: " << myBank.GetAccount(i)->GetNumber();
		std::cout << " ,owner: " << myBank.GetAccount(i)->GetOwner()->GetCode();
		std::cout << " ,partner: " << myBank.GetAccount(i)->GetPartner()->GetCode();
		std::cout << " ,balance: " << myBank.GetAccount(i)->GetBalance();
		std::cout << " ,interest: " << myBank.GetAccount(i)->GetInterestRate() << std::endl;
	}

	std::cout << std::endl;

	return 0;
}