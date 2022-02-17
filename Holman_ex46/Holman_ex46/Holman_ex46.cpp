
#include <iostream>
using namespace std;
int main() {
	cout << "Please Enter in a Number to be multiplied: \n"; 
	int i;
	cin >> i;
	cout << "Please enter the Number that you want it multiplied by: \n"; 
	int j; 
	cin >> j;  

	//cout << "\t"; 
	cout << "Multiplication Table:\n\n";
	cout << "Here, multiplication table for n = " << i << " multiplied by " << j << endl;
	cout << "________________________________________________________________\n\n";
	//cout << "\t";
	cout << "   ";
	for (int count = 1; count <= i; count++) {
		cout << "\t" << count; 
	}
	cout << endl; 

	cout << "--"; 
	for (int count = 1; count <= i; count++) {
		cout << "--------"; 
	}
	cout << endl;
	
	for (int row = 1; row <= j; row++) {
		cout << " |" << row;
		for (int column = 1; column <= i; column++){
			cout <<"\t" << row * column;
			
		}
		//cout << " |" << row;
		cout << endl;
	}
	/*
	for (int k = 1; k <= i; k++) {
		//cout << endl; 
		for (int h = 1; h <= 10; h++) {
			cout << "\t" << k * h;

		}
		//cout << "|\n"; 
		//cout << "|\n";
	}
	*/
	return 0;
}