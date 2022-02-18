// P5_0.cpp This C++ program computes the value of a
//b for three cases.
#include<iostream> 
#include <cmath>
using namespace std;
int main(void)
{
	int i = 0;
	int a = 2, b = 4, p = 1;
	while (i < b) // computing 2^4
	{
		p = pow(2, 4);
		i++;
	}
	cout << a << " to the power of " << b << " is = " << p << endl;
	i = 0;
	p = 1;
	a = 3, b = 3;
	while (i < b) // computing 3^3
	{
		p = pow(3,3);
		i++;
	}
	cout << a << " to the power of " << b << " is = " << p << endl;
	i = 0;
	p = 1;
	a = 5, b = 4;
	while (i < b) // computing 5^4
	{
		p = pow(5,4);
		i++;
	}
	cout << a << " to the power of " << b << " is = " << p << endl;
	return 0;
}

// use the pow(). takes 2 arguments. 