/*In Europe a date is written as day/month/year (i.e. 20/4/1980 is April 20th, 1980). Write a C++
program called ex72.cpp that asks the user for a day, a month, and a year and prints the date in
European format. Use a function get_input to collect the input from the user. Use a function named
output(..) to print the date in European format.
*/
#include <iostream>
#include <cmath>
using namespace std; 

void get_input(); // gets the user input for the day, month and year 
void output(); // takes the user input and displays it in European format. 

int main() {
	get_input(); 
	output(); 
}

void get_input() {
	int day, month, year;
	cout << "Please enter a date (dd/mm/yyyy)\n"; 
	cin >> day >> month >> year; 
	switch (month) {
	case 1:
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " January " << year << endl;;
		break;
	case 2:
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " February " << year << endl;;
		break;
	case 3:
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " March " << year << endl;;
		break;
	case 4: 
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " April " << year << endl;;
		break;
	case 5:
		cout << day << "/" << month << "/" << year << endl;
		cout << day <<  " May " << year << endl;;
	case 6:
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " June " << year << endl;;
		break;
	case 7:
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " July " << year << endl;;
		break;
	case 8:
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " August " << year;
		break;
	case 9:
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " September " << year << endl;;
		break;
	case 10:
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " October " << year << endl;;
		break;
	case 11:
		cout << day << "/" << month << "/" << year << endl;
		cout << day << " November " << year << endl;;
		break;
	case 12:
		cout << day << "/" << month << "/" << year << endl;
		cout << day <<  " December " << year << endl;;
		break;
	default:
		cout << "No month input.\n";
		break;

	}
}

void output() {
	get_input(); 
}