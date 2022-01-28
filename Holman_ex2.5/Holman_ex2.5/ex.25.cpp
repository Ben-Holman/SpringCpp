#include <iostream>
using namespace std; 

int main()
{
    int age;
    double ticket = 10.0;

    cout << "Please enter the age \n";
    cin >> age;

    if (age <= 10 || age >= 65) {
        ticket = 4.0;
    }
    else {
        ticket = 9.0; 
    }

    cout << "Your ticket costs " << ticket << endl;

    return 0;
}