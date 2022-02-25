// P 6_1.cpp This program illustrates the local and global variables and call-by-value. 
// This program computes the side area and the cross section area of a cylinder 
#include<iostream> 
#include<cmath> 
const double PI = 3.14159; // This constant is defined globally, known to all functions in this 
 // program as PI
const double CONVERSION = 0.3937; // This is the cm to inch conversion factor?
double surface_area(double r); // Function declaration for function that computes cross section area
double surface_area(double r); // Function declaration for function that computes side area
using namespace std; 
int main(void)
{
	//using namespace std;
	double h, r; //variables local to the main function
	cout << "Enter the radius and the height of the cylinder in cm <Enter> ";
	cin >> r >> h;
	cout << endl;
	cout << "Before I do any computation or call any function, I want to let you know that \n";
	cout << "you have entered r = " << r << " and h = " << h << "." << endl;
	cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl;
	cout << "in the second one I will convert h \n";
	cout << "The cross section area of the cylinder is " << surface_area(r) << " inch-sqr " << endl;
	cout << "The side area of the cylinder is " << surface_area(r) << " inch-sqr \n\n";

	return 0;
}
double surface_area(double r)
{
	//using namespace std;
	//Cross section area includes the disks at the bottom and the top
	

	return (4.0 / 3.0) * PI * pow(r,3);
}
double surface_area(double r)
{
	//using namespace std;
	double area = 4 * PI * pow(r, 2); 

	return area;
}

/*
* function overloading would not work for the sphere because the only variable that the sphere takes is radius. This is no height. 
* Both functions would have the same name with the same parameters and arguments. 
*/