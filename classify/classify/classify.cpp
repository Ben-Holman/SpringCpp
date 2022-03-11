#include <iostream>
#include <cmath>

using namespace std; 

void initialize(); 
void getNumber(); 
void classifyNumber(int& numbers, int& evens, int& odds, int& zeroes);
void printResults(); 

int main() {
	initialize();
	for (int i = 1; i < 20; i++) {
		getNumber();
	}
	getNumber(); 
	//classifyNumber(); 
	printResults(); 
	return 0; 
}
void initialize() {
	int zeros = 0; 
	int evens = 0; 
	int odds = 0; 
	cout << "Please enter 20 integers:" << endl; 
}

void getNumber() {
	int integers; 
	cin >> integers; 

}

void classifyNumber(int& numbers, int& evens, int& odds, int& zeroes) {
	initialize();
	int evensCount = evens; 
	int oddsCount = odds; 
	int zeroCount = zeroes; 
	switch (numbers % 2) {
	case 0:
		cout << "even\n"; 
		evensCount++; 
		zeroCount++; 
		cout << "There are " << evensCount << " with " << zeroCount << " zeroes.\n";
		break; 
	case 1:
		cout << "odd\n"; 
		oddsCount++;  
		cout << "There are " << oddsCount << "odds"; 
		break; 
	}

}

void printResults() {
	//classifyNumber(); 
}

// see if you can't store the integers in a text file and then sort it from the file. in classify()