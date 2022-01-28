#include<iostream>
#include <string>

using namespace std;

int calc(int num1, int num2, int num3) {
	int sum = num1 + num2 + num3; 

	return sum; 
}

int main() {

	int nickel, dime, quarter;

	/*
	nickel = nickel * 5; 
	dime = dime * 10; 
	quarter = quarter * 25; 
	*/
	while (true) {
		cout << "Please enter a number for the amount of nickels: \n";
		cin >> nickel;
		cout << "Please enter the number of dimes: \n";
		cin >> dime;
		cout << "Please enter the number of quarters: \n";
		cin >> quarter;

		nickel = nickel * 5;
		dime = dime * 10;
		quarter = quarter * 25;

		cout << "The total money you have in cents is " << calc(nickel, dime, quarter) << " cents\n";

		cout << "Continue? (Y/N) \n"; 

		char answer; 

		cin >> answer; 

		if (answer == 'y' || answer == 'Y') {
			cout << "Continuing\n\n";
		}
		if (answer == 'n' || answer == 'N') {
			break;
		}
	}

	double divident, divisor, quotient; 

	divident = 9; 
	divisor = 4; 
	quotient = divident / divisor; 

	cout << divident << "/" << divisor << " = " << quotient; 


	cout << "\nThank you."; 
	return 0;
}