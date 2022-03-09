#include <iostream>
#include <cmath>
#include <string>
using namespace std; 
//-----------------------------FUNCTION DECLARATION-----------------------------------
double calc_stark(double price); // calculates the price with the stark county tax rate
double calc_summit(double price); // calculates the price with the summit county tax rate 
void display(); // the initial sreen display
double input(); // gets the user input for the different calc functions
double county(double price); // gets the input from the user as to which county they live in and call the respective county calc function. 
//-----------------------------------MAIN---------------------------------------------
int main() {
	while (true) {
		display();
		double price = input();
		cout << county(price); 
		cout << "\nwant to continue?\n"; 
		char answer; 
		cin >> answer; 
		if (answer == 'y' || answer == 'Y') {
			cout << "Continuing...\n\n"; 
		}
		if (answer == 'n' || answer == 'N') {
			cout << "The program has concluded.";
			break; 
		}
	}
}
//-------------------------------------FUNCTIONS---------------------------------------------
double calc_stark(double price) {
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed); 
	cout.precision(2); 
	double tax = 0.065; 
	double total = (price * tax) + price; 
	return total; 
}

double calc_summit(double price) {
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);
	double tax = 0.0675;
	double total = (price * tax) + price;
	return total;
}
void display() {
	cout << "Welcome to the Game Price calculator!\n Please Enter a price\n"; 
}
double input() {
	double price; 
	cin >> price; 
	return price; 
}
double county(double price) {
	int county; 
	cout << "What County do you live in? Enter [1] for Summit County or enter [2] for Stark\n"; 
	cin >> county; 
	switch (county) {
	case 1: 
		cout << "you have chosen Summit County\n"; 
		return calc_summit(price); 
		break;
	case 2: 
		cout << "You have chosen Stark County\n";
		return calc_summit(price);
		break;
	default: 
		cout << "You have not chosen a county.\n\n"; 
		break; 
	}

}
