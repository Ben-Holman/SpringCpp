//P71.cpp: This function illustrates how a function can return two values
#include<iostream>
using namespace std;
// This is the declaration for the function that reads the values for i and j
// In the function both i and j are called by reference void get_input(int& i, int& j);
// This is the declaration for the function that adds 10 to i and 20 to j
// In the function i is called by reference and j is called by value
void process(int& i, int& j);
void get_input(int& i, int& j);

int main()
{
	int i, j;
	get_input(i, j);
	cout << "I am about to call function process, i = " << i << " j = " << j << endl;
	process(i, j);
	cout << "I just came back from function Process, i = " << i << " j = " << j << endl;
	return 0;
}
void get_input(int& i, int& j)
{
	cout << "Please enter two values for i and j separated by a single space, then press<Enter>:";
	cin >> i >> j;
	cout << endl;
	return; // a void function, returns nothing. This instruction is not required in this example.
}
void process(int& i, int& j)
{
	i = i + 10;
	j = j + 20;
	cout << "Inside function Process \n";
	cout << "I added 10 to i, and 20 to j, i = " << i << " and j = " << j << "\n";
}

/*
* question 1: 
*	the value for i got updated upon return from the function process 
*/

/*
* question 2:
*	you make the process function take the call-by-reference for j for it to be updated. 
*/