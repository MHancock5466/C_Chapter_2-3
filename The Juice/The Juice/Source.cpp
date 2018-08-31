//Example page 91
//Author: Mason Hancock
//Date: 08/30/2018

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double totalBill = 0.0;
	double liquor = 0.0;
	double tipPercent = 0.0;
	double totalNoLiquor = 0.0;
	double tip = 0.0;

	cout << "Enter the Total Bill: $";
	cin >> totalBill;
	cout << "Enter Liquor Charge: $";
	cin >> liquor;
	cout << "Enter the Tip Percent (Decimal Format): ";
	cin >> tipPercent;

	totalNoLiquor = totalBill - liquor;
	tip = totalNoLiquor * tipPercent;

	cout << "Tip: $" << tip << endl;

	system("Pause");
	return 0;
}