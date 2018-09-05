//Delgados Tacos
//Author: Mason Hancock
//Date: 09/05/2018
#include <iostream>
#include <string>
using namespace std;

double totalCost(int tacos, int burritos, int enchiladas, int fajitas, int drinks)
{
	double tacoCost = 1.00;
	double burritoCost = 1.25;
	double enchiladaCost = 1.50;
	double fajitaCost = 2.00;
	double drinkCost = 1.00;
	double cost = (tacos * tacoCost + burritos * burritoCost + enchiladas * enchiladaCost + fajitas * fajitaCost + drinks * drinkCost) * 1.07;
	return cost;
}

int main()
{
	double tacos = 0;
	double burritos = 0;
	double enchiladas = 0;
	double fajitas = 0;
	double drinks = 0;

	cout << "*********************************************************" << endl;
	cout << "*                                              *         **" << endl;
	cout << "*           DELGADOS TACO TRUCK                *           **" << endl;
	cout << "*                                              *             **" << endl;
	cout << "*           -------------------                *               **" << endl;
	cout << "*           |                 |                *                 **" << endl;
	cout << "*           |                 |                *" << endl;
	cout << "*           -------------------                *" << endl;
	cout << "*                                              *" << endl;
	cout << "*                                              *" << endl;

	cout << "How many tacos would you like? ";
	cin >> tacos;
	cout << "How many burritos would you like? ";
	cin >> burritos;
	cout << "How many enchiladas would you like? ";
	cin >> enchiladas;
	cout << "How many fajitas would you like? ";
	cin >> fajitas;
	cout << "How many drinks would you like? ";
	cin >> drinks;
	cout << "Your total will be: $" << totalCost(tacos, burritos, enchiladas, fajitas, drinks) << endl;
}