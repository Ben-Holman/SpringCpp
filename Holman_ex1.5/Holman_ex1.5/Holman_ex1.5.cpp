#include <iostream>
#include <string>

using namespace std;

/*
	This is my first program in C++
*/

/*
	running without debugging is CTRL+F5 and Building Solution is CTRL+SHIFT+B.
*/

string helloWorld()
{
	string helloWorld = "Hello World\n";
	return helloWorld;
}

string face() {
	cout << "^     ^\n";
	cout << "   o   \n";
	cout << "_______\n";
	cout << "\n"; 
	return 0; 
}

int main()
{
	cout << "Hello World\n";
	cout << helloWorld();
	cout << "North Canton, Friday, January 21, 2022\n";
	cout << "this is my first C++ program.\n";
	cout << "\n"; 
	cout << "^     ^\n";
	cout << "   o   \n";
	cout << "_______\n";
	cout << "\n"; 
	cout << "\n"; 
	cout << face(); 
	return 0;
}
