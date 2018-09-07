//Page 71, Problem 10
//Author: Mason Hancock
//Date: 09/05/2018
#include <iostream>
#include <string>
using namespace std;

double taxes(double pay)
{
	double federalWithholdingTax = 0.20;
	double socialSecurtyMedicareTax = 0.08;
	double stateTax = 0.04;

	double payAfterTaxes = pay - pay * (federalWithholdingTax + socialSecurtyMedicareTax + stateTax);
	return payAfterTaxes;
}

int main()
{
	double pay;

	cout << "Please input your weekly gross pay: $";
	cin >> pay;

	cout << "Your net pay will be $" << taxes(pay) << endl;

	system("pause");
	return 0;
}