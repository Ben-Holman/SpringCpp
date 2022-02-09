#include <iostream>
using namespace std; 

int main() {
	int x;
	int n;
	int count = 0;
	double sum = 0;
	double average;

	cout << "Enter number values, N, to be read in <Enter> \n";
	cin >> n;

	do {
		cout << "\nEnter a grade <Enter>:";
		cin >> x;
		sum = sum + x;
		count++;
	} while (count < n);
	
	if (n == 0) {
		cout << "You have entered 0 numbers. No average will be computed. Terminating!\n";
	}
	else {
		average = average = sum / n;
		cout << "The averages of these " << n << " grades is " << average << endl;
	}
	
	return 0; 
}