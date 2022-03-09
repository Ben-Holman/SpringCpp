#include <iostream>
#include <cmath>
#include <string>
using namespace std; 

double calc_stark(double price); 
double calc_summit(double price);
void display();
double input(); 
double county(double price);

int main() {
	while (true) {
		display();
		double price = input();
		 county(price); 
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
	case '1': 
		cout << "you have chosen Summit County\n"; 
		return calc_summit(price); 
	
		break;
	case '2': 
		cout << "You have chosen Stark County\n"; 
		return calc_summit(price);
		break;
	default: 
		cout << "You have not chosen a county.\n\n"; 
		break; 
	}

}
