#include <iostream>
using namespace std;

int main() {

	while (true) {

		int x;
		int n;
		int count = 0;
		double sum = 0;
		double average;

		cout << "Enter number values, N, to be read in <Enter> \n";
		cin >> n;

		while (count < n) {
			cout << "\nEnter a grade <Enter>:";
			cin >> x;
			sum = sum + x;
			count++;
		}
		if (n == 0) {
			cout << "You have entered 0 numbers. No average will be computed. Terminating!\n";
		}
		else {
			average = sum / n;
			cout << "The averages of these " << n << " grades is " << average << endl;
		}

		cout << "Would you like to continue Inputting and Averaging? (Y/N)?\n";
		char answer;
		cin >> answer;
		if (answer == 'y' || answer == 'Y') {
			cout << "Continuing...\n";
		}
		if (answer == 'n' || answer == 'N') {
			cout << "You Quit." << endl;
			break;
		}
		/*
			needs dubugging
			had lines 7 - 12 outside of the initial while-loop and that was causing issues.
			the issue now is that the calculation is not working properly.
			the problem is that the initial input auto-gives a result without letting the user input all the needed values for the grades before the average is calculated and printed.
			fixed the issue by the if-else statement on lines 23 - 29 being in the 'while (count < n)' loop which printed the statements
			while -- the irony -- the user was continuing to enter newer values to be calculated.
			need to push to GitHub now.
		*/
	}
	return 0;
} // it runs fine so I don't know why this error is happening 
