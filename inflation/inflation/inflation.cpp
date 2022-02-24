#include <iostream>
#include <cmath>
#include <string>

using namespace std; 



double inflation_calc(double num, double num2);

int main() {
	cout << "Welcome to the Economic Inflation Calculator!\n\n";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	string itemName;
	double itemPrice = 0;
	double newPrice = 0;
	char answer;
	while (true) {
		
		//cout << "Please enter the name of the item: \n";
		//getline(cin, itemName);
		cout << "Please enter the price of the item 1(one) year ago:\n";
		cin >> itemPrice;
		cout << "Please enter the price of that same item, " << itemName << " price now, 1(one) year later.\n";
		cin >> newPrice; 
		cout << itemName << " cost $" << itemPrice << " 1(one) year ago. The inflation rate is " << inflation_calc(itemPrice, newPrice) << "%" << endl;
		cout << "Would you like to input another item? (Y/N)\n"; 
		cin >> answer; 
		if (answer == 'Y' || answer == 'y') {
			cout << '\n';
		}
		if (answer == 'N' || answer == 'n') {
			break;
		}

	}
}

double inflation_calc(double num, double num2) {
	double rate = (num2 - num) / num; 

	return rate; 
}