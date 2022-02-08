#include <iostream>
using namespace std; 

double calculate(double weight, double radius) {
	double buoyancy = weight * ((4 / 3) * (radius * radius * radius));
	if (buoyancy >= weight) {
		cout << "your object will float \n";
	}
	else {
		cout << "Your object will sink \n";
	}

	return buoyancy;
}


int main() {
	while (true) {
		double weight = 0;
		double radius = 0;

		double gamma = 62.4;
		radius = radius * gamma;

		// f = v * g;

		cout << "Please input the weight of the object in pounds: " << endl;
		cin >> weight;
		cout << "Please input the radius  of the same object in feet: " << endl;
		cin >> radius;
		cout << calculate(weight, radius) << endl;

		cout << "would you like to do the calculation again?" << endl; 
		char answer; 
		cin >> answer; 

		if (answer == 'y' || answer == 'Y') {
			cout << "Continuing... \n"; 
		}
		if (answer ==  'n' || answer == 'N') {
			break; 
		}
	}
	cout << "calculations complete...\n";
	return 0;
}