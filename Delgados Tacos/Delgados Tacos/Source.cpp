//Delgados Tacos
//Author: Mason Hancock
//Date: 09/05/2018
#include <iostream>
#include <string>
using namespace std;

double subCost(int tacos, int burritos, int enchiladas, int fajitas, int drinks)
{
	double tacoCost = 1.00;
	double burritoCost = 1.25;
	double enchiladaCost = 1.50;
	double fajitaCost = 2.00;
	double drinkCost = 1.00;
	double subTotal = (tacos * tacoCost + burritos * burritoCost + enchiladas * enchiladaCost + fajitas * fajitaCost + drinks * drinkCost);
	return subTotal;
}

double totalCost(int tacos, int burritos, int enchiladas, int fajitas, int drinks)
{
	double total = subCost(tacos, burritos, enchiladas, fajitas, drinks) * 1.07;
	return total;
}

int main()
{
	int tacos = 0;
	int burritos = 0;
	int enchiladas = 0;
	int fajitas = 0;
	int drinks = 0;

	cout << "*********************************************************" << endl;
	cout << "*                                              *         **" << endl;
	cout << "*           DELGADOS TACO TRUCK                *  ------   **" << endl;
	cout << "*                                              *  |    |     **" << endl;
	cout << "*           -------------------                *  |    |       **" << endl;
	cout << "*           |                 |                *  ------         ***" << endl;
	cout << "*           |                 |                *                    **" << endl;
	cout << "*           -------------------                *  |                   *" << endl;
	cout << "*                                              *  |                    *" << endl;
	cout << "*                                              *                      *" << endl;
	cout << "**********************************************************************" << endl;
	cout << "        **      **                  **     **            **     **" << endl;
	cout << "          ** **                       ** **                ** **" << endl;

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
	cout << "Subtotal: $" << subCost(tacos, burritos, enchiladas, fajitas, drinks) << endl << 
		"Total: $" << totalCost(tacos, burritos, enchiladas, fajitas, drinks) << endl;

	system("pause");
	return 0;
}