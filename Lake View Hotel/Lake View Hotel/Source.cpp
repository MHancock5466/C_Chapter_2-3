//Lake View Hotel
//Author: Mason Hancock
//Date: 09/04/2018
#include <iostream>
#include <string>
using namespace std;

double findCost(int days, int minutes)
{
	double dayRate = 100;
	double minuteRate = 0.25;
	double cost = days * dayRate + minutes * minuteRate;
	return cost;
}

int main()
{
	int days;
	int minutes;

	cout << "How many days have you stayed? ";
	cin >> days;
	cout << "How many minutes were you on the phone? ";
	cin >> minutes;
	cout << "Your bill will be: $" << findCost(days, minutes) << endl;

	system("pause");
	return 0;
}