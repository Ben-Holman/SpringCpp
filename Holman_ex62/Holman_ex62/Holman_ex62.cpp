#include <iostream>
#include <cmath>
using namespace std; 

void display_it(double x, double y, int precision);

int main() {

	int precision = 4; 
	double num = 23.4565; 
	double num2 = 45.53270; 
	cout << "hello\n"; 
	display_it(num, num2, precision); 


}

void display_it(double x, double y, int precision)
{
	//using namespace std;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(precision);
	cout << x << endl;
	cout << y << endl; 
}
