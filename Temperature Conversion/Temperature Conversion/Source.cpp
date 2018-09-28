//Converting Fahrenheit to Celcius
//Author: Mason Hancock
//Date: 08/30/2018.
#include <iostream>
#include <iomanip>
using namespace std;

double convert(double temp) {
	double output = (temp - 32) * 5 / 9;
	return output;
}

int main() {
	double tempArray[5] = { 0.0 };
	//for loop
	//intialize array to hold temp values
	for (int i = 0; i < size(tempArray); i++) {
		cout << "Enter a temperature >> ";
		cin >> tempArray[i];
		cout << fixed << setprecision(2) << "The temperature conversion is " << convert(tempArray[i]) << " degrees Celsius." << endl;
	}

	system("pause");
	return 0;
}