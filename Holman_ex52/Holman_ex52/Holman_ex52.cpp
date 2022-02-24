// P5_0.cpp This C++ program computes the value of a
//b for three cases.
#include<iostream> 
using namespace std;
int main(void)
{
	while (true) {

		int i = 0;
		int a, b; 
		char answer;
		//int p = 1;
		cout << "Please enter a Number:\n";
		cin >> a;
		cout << "Please enter an exponent:\n";
		cin >> b;
		if (i < b) {
			cout << pow(a, b) << "\n";
			
		}

		cout << "Would you like to try again? (Y/N)\n"; 
		cin >> answer; 
		if (answer == 'y' || answer == 'Y') {
			cout << "Continuing Loop...\n\n"; 
		}
		else {
			if (answer == 'n' || answer == 'N') {
				break; 
			}
		}
		/*
		cout << a << " to the power of " << b << " is = " << p << endl;
		i = 0;
		p = 1;
		a = 3, b = 3;
		while (i < b) // computing 3^3
		{
			p = pow(a, b);
			i++;
		}
		cout << a << " to the power of " << b << " is = " << p << endl;
		i = 0;
		p = 1;
		a = 5, b = 4;
		while (i < b) // computing 5^4
		{
			p = pow(a, b);
			i++;
		}
		cout << a << " to the power of " << b << " is = " << p << endl;
		*/
		/*
		while(i < b) // this loop is not triggered for the whole loop to properly function. fix. 
		{
			p = pow(a, b);
			i++;
		}
		*/
		// changed it to an if-statement and ran it again -- did not work. 
	}
	return 0;
}