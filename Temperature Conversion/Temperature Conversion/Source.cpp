//Converting Fahrenheit to Celcius
//Author: Mason Hancock
//Date: 08/30/2018

#include <iostream>
#include <string>
using namespace std;

double convert(double temp)
{
	double output = (temp - 32) * 5 / 9;
	return output;
}

int main()
{
	double temp1 = 0;
	double temp2 = 0;
	double temp3 = 0;

	cout << "Input the temperature at 8:00 am: ";
	cin >> temp1;
	cout << "Input the temperature at 12:00 pm: ";
	cin >> temp2;

	while(temp2 < temp1)
	{
		cout << "Error: Temperature must not be smaller than the previous temperature.\nInput the temperature at 12:00 pm: ";
		cin >> temp2;
	}

	cout << "Input the temperature at 5:00 pm: ";
	cin >> temp3;

	while (temp3 > 10 + temp2)
	{
		cout << "Error: Temperature must not exceed previous temperature by 10 degrees.\nInput the temperature at 5:00 pm: ";
		cin >> temp3;
	} 

	cout << "Temperature at 8:00 am: 		" << temp1 << " degrees F		" << convert(temp1) << " degrees C" << endl;
	cout << "Temperature at 12:00 pm:		" << temp2 << " degrees F		" << convert(temp2) << " degrees C" << endl;
	cout << "Temperature at 5:00 pm: 		" << temp3 << " degrees F		" << convert(temp3) << " degrees C" << endl;

	system("pause");
	return 0;
}

