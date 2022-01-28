#include <iostream>
using namespace std; 

double calcTri(double num1, double num2) {
	double area = num1 * num2 * 0.5; 

	return area; 
}

double calcSqu(double num) {
	double area = num * num; 

	return area; 
}

int main() {
	while (true) {
		cout << "What would you like to calculate?\n";
		cout << "Would you like to calculate a triangle or square? (t/s)\n";
		char answer;
		cin >> answer;
		if (answer == 't' || answer == 'T') {
			cout << "please input the base and height values: \n";
			double base, height;
			cin >> base;
			cin >> height;

			cout << "The calculation of your triangle is " << calcTri(base, height) << ".\n";

		}
		if (answer == 's' || answer == 'S') {
			cout << "Please input the side value.\n";
			double side;
			cin >> side;
			cout << "The area of the square based on the side value of input is: " << calcSqu(side) << ".";
		}
		cout << "Would you like to continue? (y/n)\n"; 
		char answer2; 
		cin >> answer2; 
		if (answer2 == 'y' || answer2 == 'Y') {
			cout << "Continuing\n\n"; 
		}
		if (answer2 == 'n' || answer2 == 'N') {
			break; 
		}
	}
}