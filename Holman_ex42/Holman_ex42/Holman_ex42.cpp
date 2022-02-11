//P42.cpp - This program prints Hello! as many times as requested.  
//Exercise 4.2
#include<iostream>  
using namespace std;
int main()
{
    while (true) {
        int times;
        cout << "Enter number of times you want me to print \"Hello!\"\n";
        cin >> times;
        for (int i = 1; i < times; i++)
        {
            cout << "Hello!" << endl;
        }
        cout << "would you like to repeat the loop? (Y/N)?\n"; 
        char answer; 
        cin >> answer; 
        if (answer == 'y' || answer == 'Y') {
            cout << "Continuing the Loop.\n\n"; 
        }
        if (answer == 'n' || answer == 'N') {
            break; 
        }
    }
    return 0;
}