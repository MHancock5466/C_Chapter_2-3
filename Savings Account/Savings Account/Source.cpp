//Page 71, Problem 8
//Author: Mason Hancock
//Date: 09/04/2018
#include <iostream>
#include <string>
using namespace std;

double savings(double earnings)
{
	double percentToSavings = 1;
	double checkSavings = earnings * percentToSavings;
	return checkSavings;
}

double totalSavings(double earnings)
{
	double totalSavings;
	totalSavings = totalSavings + savings(earnings);
	return totalSavings;
}

int main()
{
	for (int checkNumber = 1; checkNumber <= 24; checkNumber++)
	{
		double earnings = 0;

		cout << "What was your paycheck amount for check #" << checkNumber << "? ";
		cin >> earnings;
		totalSavings(earnings);
	}

	system("pause");
	return 0;
}