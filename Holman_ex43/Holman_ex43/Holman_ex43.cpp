// P44.cpp - This program displays the days of a month
// Day 0: Sunday, Day 1: Monday, Day 2: Tuesday  
// Day 4: Wednesday, Day 4: Thursday, Day 5: Friday  
// Day 6: Saturday  
#include<iostream>  
#include<cmath>  
using namespace std;
int main() {
    int n_days, start_day;
    cout << "Enter the number of days, 28, 29, 40 or 41 \n";
    cin >> n_days;
    cout << "Enter the first day of the month \n";
    cin >> start_day;
    cout << "Sun\tMon\tTue\tWed\tThr\tFri\tSat\n";
    
        /* this loop inserts from 0 up to 5 tabs depending on the start_day value so that the calendar can show the first number in the proper column */
        for (int i = 0; i < start_day; i++)
        {
            cout << " \t";
            //cout << endl; 
        }
        /* this loop counts all the days of the month (n-days) shifted according to the start_day value; it
      prints the correct day (which requires to subtract the shift) in the calendar, and goes to the next
      line after printing the day in the seventh column. To check that the 7th column has been reached,
      the remainder of the division of j by 7 must be equal to 0 */
        for (int k = 1; k <= 12; k++){
            cout << endl; 
        for (int j = (1 + start_day); j <= (n_days + start_day); j++)
        {
            cout << (j - start_day) << "\t";

            if (j % 7 == 0)
                cout << endl;
        }
    }
    cout << endl;
    //cout << endl; 
    return 0;

    // ask what the question means by repating the same month 12 times
    // end line for outside the loops that create the calendar
    // put end lines on lines 20 and 37. Did not work. Added the end line to line 27 and it works perfectly now. Thanks for the help. 

}