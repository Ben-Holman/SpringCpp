/*
void instructions()
//Displays instructions on how to run the program and what the input is.

void get_test_files(ifstream& in_s, ofstream& out_s)
// This function asks users to enter the input and output file names from the keyboard. It
will attempt to connect to the files and once successfully connected, it returns the input
and output streams to the main. If it fails to connect to the input or output file, it will
terminate the program.

void write_header(ofstream& out_s)
// This function will write the 7 lines of header into the output file.

void write_footer(ofstream& out_s)
// This function will write the last 2 lines, the footer of the html file.

void copy_text(ifstream& in_s, ofstream& out_s)
// This file copies the entire contents of the input file, myfile.txt, into the output file,
myfile.html, line-by-line, by considering the given instruction for the newline.*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std; 
void instructions();
void get_test_files(ifstream& in_s, ofstream& out_s);
void write_header(ofstream& out_s);
void write_footer(ofstream& out_s); 
void copy_text(ifstream& in_s, ofstream& out_s);

int main() {
	ifstream instream; 
	ofstream outstream; 
	instructions(); 
	get_test_files(instream, outstream);
	copy_text(instream, outstream); 
	write_footer(outstream); 
	return 0; 
}


void instructions() {
	cout << "This program coverts a text file to a HTML file to display in your broswer.\n"; 
	cout << "Please enter the name of the file that you would like to convert i.e 'input.txt'\n"; 
}

void get_test_files(ifstream& in_s, ofstream& out_s) {
	char input_file[15];
	cin >> input_file;
	in_s.open(input_file); 
	if(in_s.fail())
	{
		cout << "Input file opening failed. \n";
		exit(1); // if we couldn't open the file to read from we exit
	}
	out_s.open("myFile.html");
	write_header(out_s); 
}

void write_header(ofstream& out_s) {
	out_s << "<html>"; 
	out_s << "<head>";
	out_s << "<title>";
	out_s << "This Is My C++ HTML Converter.";
	out_s << "</title>";
	out_s << "<h1> C++ HTML Converter </h1>";
	out_s << "</head>";
}

void write_footer(ofstream& out_s) {
	out_s << "</body>"; 
	out_s << "</html>"; 
}

void copy_text(ifstream& in_s, ofstream& out_s) {
	char next; 
	in_s.get(next); 
	while (!in_s.eof()) {
		out_s << next; 
		in_s.get(next); 
	}

	in_s.close(); 
	out_s.close(); 
}