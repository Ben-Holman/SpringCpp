/*
The variable x is initialized  at 10. The loop runs 10 times and prints 1 - 10. Then, within the loop, x is assigned the value of 5. 
x would be assigned 5 and i would be assigned 10 in block 2. 
After block 2 then x would be printed as having the value of 10 again because it is no longer within block 2. 
*/

#include <iostream> 
using namespace std;

int main()
{   // begin of block 1 
    int x = 10;
    for (int i = 0; i < x; i++)    //the x here is the one declared in block 1 
    {   // begin of block 2 
        cout << "x = " << x << endl; //the x here is the one declared in block 1 
        int x = 5;
        cout << "x = " << x << endl; // the x here is the one declared in block 2 
       // cout << "i = " << i << endl;
    }   // end of block 2 
    cout << "x = " << x << endl;  //the x here is the one declared in block 1 
    return 0;
}   // end of block 1  

/* I was correct, however, I did not account for i being printed and iterated upon from 0 to 10 so each loop the new value would be printed to the console.*/
