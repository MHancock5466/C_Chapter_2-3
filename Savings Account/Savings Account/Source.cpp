//Page 71, Problem 8
//Author: Mason Hancock
//Date: 09/04/2018
#include <iostream>
#include <string>
using namespace std;

double savings(double earnings, double percentSavings)
{
	double checkSavings = earnings * 24 * percentSavings / 100;
	return checkSavings;
}

int main()
{
	double earnings = 0;
	double percentageSaving = 0;
	double totalSavings = 0;

	cout << "How much are you paid per check? ";
	cin >> earnings;	
	cout << "What percent of your income are you saving? ";
	cin >> percentageSaving;
	totalSavings = savings(earnings, percentageSaving) + 100;

	cout << "Your Savings This Year Totals: $" << totalSavings << endl;

	system("pause");
	return 0;
}