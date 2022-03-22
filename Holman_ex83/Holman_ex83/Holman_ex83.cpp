// P81.cpp - This program reads some integers from a file and displays:
// The number, number^2, and the sum of all numbers read up to that point
#include<iostream>
#include<fstream> // Step (1)
#include<cstdlib>
#include<cmath>
using namespace std;
void get_stream(ifstream& in_s, ofstream& out_s); // added function
int main()
{
	ifstream in_s; // Step (2)-B - declaration of the stream of type input
	ofstream out_s; 
	get_stream(in_s, out_s);
}
void get_stream(ifstream& in_s, ofstream& out_s)
{
	double x;
	int count = 0;
	float sum = 0, avg;
	char input_file[15]; // Step (2)-A
	cout << "Please input the input file name \n"; // Step (3)-A Get the file name
	cin >> input_file;
	in_s.open(input_file); // Step (3)-B - connect to the input file and test
	out_s.open("output.txt");
	if (in_s.fail())
	{
		cout << "Input file opening failed. \n";
		exit(1); // if we couldn't open the file to read from we exit
	}
	cout << "\t x \t\t x^2 \t\t Current Sum \n";
	cout << "\t === \t\t === \t\t ========== \n";

	//=============================================================

	out_s << "\t x \t\t x^2 \t\t Current Sum \n";
	out_s<< "\t === \t\t === \t\t ========== \n";
	while (in_s >> x) // Step (4)-Read all numbers one-by-one to the end of the file
	{
		sum = sum + x;
		cout << "\t " << x << "\t\t " << pow(x, 2) << "\t\t " << sum << "\n";
		out_s << "\t " << x << "\t\t " << pow(x, 2) << "\t\t " << sum << "\n";
		count++;
	}
	avg = sum / count;
	cout << "\n \t\t The average of these " << count << " numbers is: " << avg << endl;
	in_s.close(); // Step (5)-Close the connection (close the file)
	out_s.close();
}

/*copied and pasted the code in main to the function and passed the outpiut stream by reference into it.*/