// P 6_1.cpp This program illustrates the local and global variables and call-by-value. 
// This program computes the side area and the cross section area of a cylinder 
#include<iostream> 
#include<cmath> 
const double PI = 3.14159; // This constant is defined globally, known to all functions in this 
 // program as PI
const double CONVERSION = 0.3937; // This is the cm to inch conversion factor?
const double SPHERE_AREA = 4 * PI; 
const double VOLUME = (4.0 / 3.0) * PI; 
double volume(double r); // Function declaration for function that computes cross section area
double area(double r); // Function declaration for function that computes side area
using namespace std; 
int main(void)
{
	//using namespace std;
	double r; //variables local to the main function
	cout << "Enter the radius of the sphere in cm <Enter> ";
	cin >> r;
	cout << endl;
	cout << "Before I do any computation or call any function, I want to let you know that \n";
	cout << "you have entered r = " << r <<  endl;
	cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl;
	cout << "The cross section area of the sphere is " << volume(r) << " inch-sqr " << endl;
	cout << "The side area of the sphere is " << area(r) << " inch-sqr \n\n";

	return 0;
}
double volume(double r)
{
	//using namespace std;
	//Cross section area includes the disks at the bottom and the top
	double volume = VOLUME * r * r * r; 

	return volume;
}
double area(double r)
{
	using namespace std;
	double area; //variable local to Side_area function
	//h = h * CONVERSION; // converting h to inch
	r = r * CONVERSION; // converting r to inch
	area = SPHERE_AREA * r * r;

	return area;
}

/*
* function overloading would not work for the sphere because the only variable that the sphere takes is radius. This is no height. 
* Both functions would have the same name with the same parameters and arguments. 
* you can overload the function because the arguments are different. 1 surface area function takes one argument,
while the second function takes 2 arguments and both have the same name. 
*/