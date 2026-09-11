#include <iostream>
using namespace std;
void options()
{
	cout << "\t\t\t\t\t========================\n";
	cout << "\t\t\t\t\t=          ATM         =\n";
	cout << "\t\t\t\t\t========================\n";
	cout << "\t\t\t\t\t  1. Deposit\n";
	cout << "\t\t\t\t\t  2. Check Balance\n";
	cout << "\t\t\t\t\t  3. Withdraw\n";
	cout << "\t\t\t\t\t  4. Exit\n";
}
int choice()
{
	cout << "\t\t\tChoose option : ";
	int option;
	cin >> option;
	return option;
}
int result()
{
	float balance{ 100000 };
	int option{ choice() };
	if (option == 1)
	{
		cout << "\t\t\t\tWrite the amount :";
			float amount;
		cin >> amount;
		float totalamount;
		totalamount = balance +amount;
		cout << "\t\t\t\tYour total amount now is : " << totalamount << '\n';
	}
	else if (option == 2)
	{
		cout << "\t\t\t\tYour current balance is : " << balance<<'\n';
	}
	else if (option == 3)
	{
		cout << "\t\t\t\tEnter the amount u want to withdraw : ";
		float withdraw;
		cin >> withdraw;
		if (withdraw < balance) {
			float currentbalance;
			currentbalance = balance - withdraw;
			cout << "\t\t\t\tYour current balance is : " << currentbalance << '\n';
		}
		else
		{
			cout << "\t\t\t\tYou don't have sufficient balance";
		}
	}
	else if (option == 4)
	{
		cout << "\t\t\t\t----Exit----";
	}
	else
	{
		cout << "\t\t\t\tError";
	}
	cout << "\n\n\t\t\t\t\t=======THE END=======";
	return 0;
}