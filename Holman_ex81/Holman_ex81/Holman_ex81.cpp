// P 81.cpp - This program reads some integers from a file and displays:
// The number, number^2, and the sum of all numbers read up to that point
#include <iostream>
#include <fstream> // Step (1)
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	double x;
	int count = 0;
	float sum = 0, avg;
	char input_file[15]; // Step (2)-A
	ifstream in_s; // Step (2)-B - declaration of the stream of type input
	ofstream out_s; // creating the output stream
	cout << "Please input the input file name \n"; // Step (3)-A Get the file name
	cin >> input_file;
	in_s.open(input_file); // Step (3)-B - connect to the input file and test
	if (in_s.fail())
	{
		cout << "Input file opening failed. \n";
		exit(1); // if we couldn't open the file to read from we exit
	}
	out_s.open("output.txt");
	cout << "\t x \t\t x^2 \t\t Current Sum \n";
	cout << "\t === \t\t === \t\t ========== \n";
	out_s << "\t x \t\t x^2 \t\t Current Sum \n";
	out_s << "\t === \t\t === \t\t ========== \n";
	while (in_s >> x) // Step (4)-Read all numbers one-by-one to the end of the file
	{
	sum = sum + x;
	cout << "\t " << x << "\t\t " << pow(x,2) << "\t\t " << sum << "\n";
	out_s << "\t " << x << "\t\t " << pow(x, 2) << "\t\t " << sum << "\n";
	count++;
	}
	avg = sum / count;
	cout << "\n \t\t The average of these " << count << " numbers is: " <<
		avg << endl;
	out_s << "\n \t\t The average of these " << count << " numbers is: " <<
		avg << endl;
	//--------------------------------------------------------------------------------------------------------
	return 0;
}

/*
	I started by creating the output file and connecting it. 
	I then copy and pasted the code and changed all teh cout statements to the out_s variable name to write to the file.
	I cannot figure out how the read 4's can be displayed in the file. 
	I tried changing the while loop from input to output and I got an infinite file. 
	I deleted the copy and pasted code, added the output stream line to the while loop at the beginning and it worked. 
*/