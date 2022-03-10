#include <iostream>
#include <cmath>

using namespace std; 
int triangle(); 
int upsideDownTriangle(int size, char character); 
int square(); 
int rectangle(); 
int input(); 
char character_input(); 
int main() {

	triangle()
	return 0; 
}

int triangle() {
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

int square() {

}
int rectangle() {

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


