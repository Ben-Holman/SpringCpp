#include<iostream> 
using namespace std;
int main()
{
	int t_in_fah, t_in_cel; //Notice that we declared these two as integers, not the best choice
	cout << "Enter a temperature in Fahrenheit \n";
	cin >> t_in_fah;
	t_in_cel = static_cast<double>(5) / 9 * (t_in_fah - 32);
	cout << "The temperature in Celsius is: " << t_in_cel << endl;
	return 0;
}
/*
Test cases :
32 F is 0 C -- first run: passes. second run: Passes. third run: Passes. 
212 F is 100 C -- first run: fails.  Second Run: Fails. third run: Fails. 

no matter what the input is the answer in Celcius is always 0. 

so I started by casting t_in_cel, but there was no expression to do the conversion. I then casted the 
t_in_fah and got nothing. I then casted the whole expression of 5/9 and got nothing. I then tried casting the entire conversion expression
nothing. 

I looked back at the example and saw that it was static_cast<double>(x)/y. 
so then I did static_cast<double>(5)/9 and then it worked. 
*/