#include <iostream>
#include <cmath>

using namespace std; 
void triangle(int size, char character); // draws the triangle shape
void upsideDownTriangle(int size, char character); // draws the flipped triangle
void square(int size, char character); // draws the square
void rectangle(int size, char character); // draws the rectangle
int input(); // grabs the input of the size from the user
char character_input(); // grabs the user input for the character they want to use
void ScreenDisplay(); // displays the intial message for the user to the screen 
void options(int size, char character); // the real workhorse. Takes the size and chracter input from the other two functions and gives theuser the option to pick what shape they want to draw. 

										//-----------------------------------MAIN-------------------------------------------

int main() {
	ScreenDisplay();
	int size = input();
	char character = character_input();
	options(size, character); 
	return 0; 
}
										//--------------------------------FUNCTIONS------------------------------------------

void triangle(int size, char character) {
		//char character = character_input();
		cout << endl;
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= size - i; j++) {
				cout << " ";
			}

			for (int k = 1; k <= (2 * i - 1); k++) {
				cout << character;
			}
			cout << endl;
		}
}

void upsideDownTriangle(int size, char character) {
	int space;
	character;
	space = 1;
	//cout << endl; 
	for (int i = 1; i <= size - 1; i++)
	{
		for (int j = 1; j <= space; j++)
			cout << " ";
		space++;
		for (int k = 1; k <= 2 * (size - i) - 1; k++)
			cout << character;
		cout << "\n";
	} // in class we used 2 * rowNumber + 1, I used 2 * i - 1 because my variable starts at 1. 
}

void square(int size, char character) {

}
void rectangle(int size, char character) {

}

int input() {
	int size = 0;
	//cout << "Welcome to the Draw Pattern Program!\n";
	cout << "Please enter a number for the size of the pattern\n";
	cin >> size;
	return size;
}
char character_input() {
	char character;
	cout << "What character would you like to print? Star or Ampersand? (*/&)\n";
	cin >> character;
	// cout << endl; 
	if (character == '*') {
		cout << "*";
		return character;
	}
	if (character == '&') {
		cout << "&";
		return character;
	}

}
void options(int size, char character) {
	int options; 
	cout << "Choose what Shape you would like to draw\n Enter the number that cooresponds to the shape in the list:\n [1] Regular Triangle\n [2] Upside Down Triangle\n [3] Sideways Triangle\n [4] Square\n [5] Rectangle\n\n"; 
	cin >> options; 
	switch (options) {
	case 1:
		cout << "You Chose Regular Triangle\n"; 
		return triangle(size, character); 
		break;
	case 2:
		cout << "You Chose Upside Down Triangle\n"; 
		return upsideDownTriangle(size, character);
		break;
	case 3:
		cout << "You Chose Sideways Triangle\n"; 
		//return options; 
		break;
	case 4:
		cout << "You Chose Square\n"; 
		return square(size, character);
		break;
	case 5:
		cout << "You Chose Rectangle\n"; 
		return rectangle(size, character);
		break; 
	}

}

void ScreenDisplay() {
	cout << "Welcome to the Shape Drawing Program!\n";
}
/*
* I copied most of the code from Pascal's Triangle program. I used the diamond loops for the upside down triangle. 
* I created several functions. 
* there was a hiccup that the chracter input would display twice. The user was never given the option to enter a size. And then Options() would display and the program would end. 
* I fixed this by making the size input the line before the character input and it worked. 
*/