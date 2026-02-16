#include <iostream>
using namespace std;

class BankAccount
{
	public:
		string name;
		int balance;

		void windraw(int amount)
		{
			balance-= amount;
		};

		void print()
		{
			cout << name << " has " << balance << " dollars in this blank account" << endl;
		};
};

int main()
{
	BankAccount account1;
	account1.name = "Sam";
	account1.balance = 200;
//	cout << account1.name << " has " << account1.balance << " dollars in this bank" << endl;
	account1.print();

	BankAccount account2;
	account2.name = "kevin";
	account2.balance = 400;
	cout << account2.name << " has " << account2.balance << " dollars in this bank" << endl;
//	account2.balance = account2.balance - 20;
	account2.windraw(30);
//	cout << account2.name << " has " << account2.balance << " dollars in this bank" << endl;
	account2.print();

	return 0;
}
