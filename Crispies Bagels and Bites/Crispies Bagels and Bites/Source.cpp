//Page 71, Problem 9
//Author: Mason Hancock
//Date: 09/05/2018
#include <iostream>
#include <string>
using namespace std;

double totalCost(int bagels, int donuts, int coffees)
{
	double bagelCost = 0.99;
	double donutCost = 0.75;
	double coffeeCost = 1.20;
	double total = bagelCost * bagels + donutCost * donuts + coffeeCost * coffees;
	return total;
}

int main()
{
	int bagels;
	int donuts;
	int coffees;

	cout << "How many bagels would you like? ";
	cin >> bagels;
	cout << "How many donuts would you like? ";
	cin >> donuts;
	cout << "How many cups of coffee would you like? ";
	cin >> coffees;

	cout << "Your total will be: $" << totalCost(bagels, donuts, coffees) << endl;

	system("pause");
	return 0;
}