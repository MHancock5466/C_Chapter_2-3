//Dozen Egg Counter
//Author: Mason Hancock
//Date: 09/04/2018
#include <iostream>
#include <string>
using namespace std;

int convertToDozen(int eggs)
{
	int dozenEggs = eggs / 12;
	return dozenEggs;
}

int convertToRemaining(int eggs)
{
	int remainEggs = eggs % 12;
	return remainEggs;
}

double findCost(int eggs)
{
	int dozen = convertToDozen(eggs);
	int remaining = convertToRemaining(eggs);

	if (eggs > 120)
	{
		double cost = dozen * 1.50 + remaining * 0.25;
		return cost;
	}
	else
	{
		double cost = dozen * 2.00 + remaining * 0.25;
		return cost;
	}
}

int main()
{
	int eggs;
	
	cout << "How many eggs are you purchasing? ";
	cin >> eggs;
	cout << "Your bill will be: $" << findCost(eggs) << endl;

	system("pause");
	return 0;
}