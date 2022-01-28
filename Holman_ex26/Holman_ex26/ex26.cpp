#include <iostream>

using namespace std;

int main() {
	while (true) {

		int a, b;

		cout << "Please enter a number: \n";
		cin >> a;
		cout << "Please enter another number: \n";
		cin >> b;
		if (b == 0) {
			cout << "this quotient is undefined\n";
		}
		if (a % b == 0) {
			cout << "this quiotent will be even\n";
			cout << a % b << ".\n";
		}

		cout << a << " divided by " << b << " = " << a / b << ".\n\n";

		cout << "would you like to exit? (y/n)\n"; 

		char answer; 

		cin >> answer; 

		if (answer == 'y' || answer == 'Y') {
			break;
		}
		else {
			cout << "Continuing. \n\n";
		}
	}
}