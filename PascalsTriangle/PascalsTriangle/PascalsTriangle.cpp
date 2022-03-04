#include <iostream>
#include <cmath>
using namespace std;
//----------------------DECLARATIONS----------------------------------------------
void triangle(int size);
void diamond(int size, char character);
int input();
char character_input();
//------------------------MAIN----------------------------------------------------
int main() {
	int screenDisplay = input();
	//char displayCharacter = character_input(); 
	cout << "Please enter in what kind of Pattern you would like. Triangle or Diamond (T/D)\n";
	char answer;
	cin >> answer;
	char character = character_input(); 
	if (answer == 't' || answer == 'T') {
		triangle(screenDisplay);
	}
	if (answer == 'd' || answer == 'D') {
		diamond(screenDisplay, character);
	}

	return 0;
}


//------------------------FUNCTIONS-----------------------------------------------
void triangle(int size) {
	char character = character_input();
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
// if I have the triangle correct, all I have to do is reverse the triangle. 
void diamond(int size, char character) {
	triangle(size);
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

int input() {
	int size = 0;
	cout << "Welcome to the Draw Pattern Program!\n";
	cout << "Please enter a number for the size of the pattern\n";
	cin >> size;
	return size;

}
char character_input() {
	char character;
	cout << "What character would you like to print? Star or Amberson? (*/&)\n";
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
/*
I've started out just decalring all the functions I think I'll need. I'm going to code the functions first before I code the main part.
I then started to code the Rows function.
I'm actually going to code ther whole program in Main() so that I can test it and see if I have the ocorrect logic.
When I do, I will then break it down into functions.

*/

// ask the user what charactre do they want to print. 