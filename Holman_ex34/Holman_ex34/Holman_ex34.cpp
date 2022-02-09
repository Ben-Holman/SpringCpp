#include <iostream> 
using namespace std; 

int main() {

	int x;
	int count = 0; // (1) initialize a counter to 0 to count number of values int choice = 1; 
	int choice = 1;
	double sum = 0;
	double average;
	do {	// (2) read N grades and compute their sum, count ensures N entries   {
			// read each number and compute the sum:
		cout << "\n Enter a grade <Enter>: ";
		cin >> x;
		sum = sum + x;
		count++; // (3) update the count
				// prompt the user:
		cout << "Do you wish to enter another grade? (1 for yes and 0 or other key for no): " << endl;
		cin >> choice;

		if (count == 0) {
			cout << "You haven't entered any number. No average will be computed. Bye!\n";
		}
		else {
			average = sum / count; //Notice that we have divided by count this time 
			cout << "The average of these " << count << " grades is " << average << "." << endl;
		}
	} while (choice == 1); 
	return 0;

}

