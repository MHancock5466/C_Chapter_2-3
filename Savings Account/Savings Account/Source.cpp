//Page 71, Problem 8
//Author: Mason Hancock
//Date: 09/04/2018
#include <iostream>
#include <string>
using namespace std;

double savings(double earnings)
{
	double percentToSavings = .1;
	double checkSavings = earnings * percentToSavings;
	return checkSavings;
}

int main()
{
	double earnings = 0;
	double totalSavings = 0;
	double bonus = 0;

	for (int checkNumber = 1; checkNumber <= 24; checkNumber++)
	{
		cout << "What was your paycheck amount for check #" << checkNumber << "? ";
		cin >> earnings;	
		totalSavings = totalSavings + savings(earnings);
	}

	cout << "How much did you receive from your bonus check? ";
	cin >> bonus;

	if (bonus >= 100)
		totalSavings = totalSavings + 100;
	else
		totalSavings = totalSavings + bonus;

	cout << "Your Savings This Year Totals: $" << totalSavings << endl;

	system("pause");
	return 0;
}