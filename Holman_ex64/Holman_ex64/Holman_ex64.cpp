#include <iostream>
#include <cmath>
using namespace std; 
//----------------------DECLARATIONS----------------------------------------------
int rows(int argument1);
//int columns(int argument1); 
int space(int argument1); 
//------------------------MAIN----------------------------------------------------
int main() {
	while (true) {
		char answer1; 
		cout << "Would Would you Like to Print? A Triangle or Diamond (T/D)\n"; 
		cin >> answer1; 
		if (answer1 == 't' || answer1 == 'T') {
			cout << "You Have Chosen A Triangle\n"; 
		}
		if (answer1 == 'd' || answer1 == 'D') {
			cout << "You Have Chosen A Diamond\n"; 
		}
		int size = 0;
		cout << "Please input a number\n";
		cin >> size;
		cout << rows(size) << space(size) << endl;

	}

}
//------------------------FUNCTIONS-----------------------------------------------
int rows(int argument1) {
	for (int rows = 0; rows <= argument1; rows++) {
		cout << "*\n"; 
	}

}
/*
int columns(int argument1) {


}
*/
int space(int argument1) {
	for (int space = 0; space < argument1; space++) {

	}

}
int triangle(int argument1) {
	
	rows(argument1); 

	space(argument1);

	int total = 0; 

	return total; 
}
/*
I've started out just decalring all the functions I think I'll need. I'm going to code the functions first before I code the main part. 
I then started to code the Rows function. 


*/