// P 5_2.cpp This program illustrates the local and global variables and call-by-value. 
// This program computes the side area and the cross section area of a cylinder 
#include<iostream> 
#include<cmath> 
using namespace std;
//Let?s declare first any global constant, if any required
// This variable is defined globally, i.e. it is known to all functions in this program as PI 
// To declare a global constant you must write it outside the main() function
const double PI = 3.14159;

//Now we declare any programmer defined function
double cross_area(double r); // Function prototype for function cross_area 
double side_area(double r, double h); // Function prototype for function Side_area 
double total_calc(double r, double h); // function prototype for calculating the total area. 

// Start defining the main function
int main(void)
{
	double h, r; //variables local to the main function
	cout << "Enter the radius and the height of the cylinder in Cm <Enter> ";
	cin >> r >> h;
	cout << endl;
	cout << "Before I do any computation or call any function, I want to let you know that \n";
	cout << "you have entered r = " << r << " and h = " << h << "." << endl;
	cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl;
	cout << "in the second one I will convert h \n";
	cout << "The cross section area of the cylinder is " << cross_area(r) << " inch-sqr" << endl;
	cout << "The side area of the cylinder is " << side_area(r, h) << " inch-sqr \n\n";
	cout << "The total area of the cylinder is " << total_calc(r, h) << "inch-sqr\n\n"; 
	return 0;
}
// Definition of all programmer defined functions
double cross_area(double r)
{
	//Cross section area includes the disks at the bottom and the top 
	r = r * 0.3937; // converting r to inch
	return 2 * PI * pow(r, 2);
}
double side_area(double r, double h)
{
	double area; //variable local to side_area function
	h = h * 0.3937; // converting h to inch
	r = r * 0.3937; // converting r to inches just like in cross_area. 
	area = 2 * PI * r * h;
	return area;
}

double total_calc(double r, double h) {
	double total; 
	total = cross_area(r) + side_area(r,h);
	return total; 
}
// I used the function to call the functions. 

/*The correct answer should be:
 The cross-section area of the cylinder is 3.89556 inch-sq -- this is correct
 The side area of the cylinder is 19.4778 inch-sqr -- this is not correct -- why.
 for side_area, changed r * h to pow(r,h)g ave me a very high number. I figured that would be the case, but wanted to test it anyway.
 Then I removed the 2 on line 41. Did not work. Got closer, but did not work.
 needed to add the radius conversion.


 The test case passes.
 */