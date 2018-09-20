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
	int orderNumber;

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

	do {
		cout << "\nWhat would you like to order?\n1 - Taco\n2 - Burrito\n3 - Enchilada\n4 - Fajita\n5 - Drink\n6 - Checkout\nYour order number: ";
		cin >> orderNumber;
		switch (orderNumber) {
		case 1:
			cout << "\nHow many tacos would you like? ";
			cin >> tacos;
			break;
		case 2: 
			cout << "\nHow many burritos would you like? ";
			cin >> burritos;
			break;
		case 3: 
			cout << "\nHow many enchiladas would you like? ";
			cin >> enchiladas;
			break;
		case 4: 
			cout << "\nHow many fajitas would you like? ";
			cin >> fajitas;
			break;
		case 5: 
			cout << "\nHow many drinks would you like? ";
			cin >> drinks;
			break;
		case 6: 
			break;
		default:
			cout << "\nNot a valid input" << endl;
		}
	} while (orderNumber != 6);

	cout << "\nSubtotal: $" << subCost(tacos, burritos, enchiladas, fajitas, drinks) << endl << 
		"Total: $" << totalCost(tacos, burritos, enchiladas, fajitas, drinks) << endl;

	system("pause");
	return 0;
}
