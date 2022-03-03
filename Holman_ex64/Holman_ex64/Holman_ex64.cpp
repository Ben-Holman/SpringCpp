#include <iostream>
#include <cmath>
using namespace std;
//----------------------DECLARATIONS----------------------------------------------
void triangle(int size);
void diamond(int size);
//------------------------MAIN----------------------------------------------------
int main() {
	int size = 0;
	cout << "Welcome to the Draw Pattern Program!\n";
	cout << "Please enter a number for the size of the pattern\n";
	cin >> size;
	cout << "Please enter in what kind of Pattern you would like. Triangle or Diamond (T/D)\n";
	char answer;
	cin >> answer;
	if (answer == 't' || answer == 'T') {
		triangle(size);
	}
	if (answer == 'd' || answer == 'D') {
		diamond(size);
	}

	return 0;
}


//------------------------FUNCTIONS-----------------------------------------------
void triangle(int size) {

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*";
		}
		cout << endl;
	}


}
// if I have the triangle correct, all I have to do is reverse the triangle. 
void diamond(int size) {
	triangle(size);
	int space;
	space = 1;
	for (int i = 1; i <= size - 1; i++)
	{
		for (int j = 1; j <= space; j++)
			cout << " ";
		space++;
		for (int k = 1; k <= 2 * (size - i) - 1; k++)
			cout << "*";
		cout << "\n";
	}
}
/*
I've started out just decalring all the functions I think I'll need. I'm going to code the functions first before I code the main part.
I then started to code the Rows function.
I'm actually going to code ther whole program in Main() so that I can test it and see if I have the ocorrect logic.
When I do, I will then break it down into functions.

*/