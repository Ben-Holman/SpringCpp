#include <iostream>
#include <cmath>
using namespace std; 

int main() {
	int x = 0; 
	int n = 0; 
	cout << "Enter the number you would want to see a multiplication table of (up tp 20):\n"; 
	cin >> x; 
	cout << "enter the number you where you want the multiplication number to stop (up to 20):\n"; 
	cin >> n; 

	cout << "Multiplication Table for n = " << x <<  " for " << n << "  number of times\n" << endl;
	cout << "__________________________________\n" << endl; 
	for (int i = 0; i <= x; i++) {
		
		cout << i << endl;
	}
	for (int j = (1 + x); j <= (x + n); j++) {
		int answer = n * x;
		cout << answer << endl;
	}
	/*This was a lot of trial and error for me. I didn't really use a lot of nested loops in my previous course. */
}