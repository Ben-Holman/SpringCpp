// P10_1.cpp - This program demonstrates the use of C-string functions 
#include<iostream> 
#include<cstring> 
using namespace std;
/*
void swap(char& v1, char& v2);
string reverse(const string& s);
string removePunct(const string& s, const string& punct);
string makeLower(const string& s);
bool isPal(char str[]);
*/
bool isPal(char str[]);
int main()
{
    char s1[8], s2[8];
    int length1, length2, length3, j;
    j = 0;
    int count = 0;
    // Initialize the two strings 
    strcpy_s(s1, "Black");
    strcpy_s(s2, "Black");
    //got an error for the regular strcpy so changed it to strcpy_s 



    // After the first time ask the user to enter them 

    cout << "Now I let you enter two strings \n";
    cout << "Enter the first string, then the second \n";
    // Another way to initialize the two strings 
    cin >> s1 >> s2;

    // Find their lengths 
    length1 = strlen(s1);
    length2 = strlen(s2);
    // Compare their length 
    if (length1 == length2)
    {
        cout << "The two strings are the same length, are they the same? \n";
    }
    // See if they are the same 
    if (!strcmp(s1, s2))
    {
        cout << "The two strings: ";
        cout << s1 << " and " << s2 << " are the same \n";
        cout << "\n Let's combine the strings and reverse the String and see if the string is a palindrome:\n";
        strncat_s(s1, s2, 50);
        length1 = strlen(s1);
        j = length1 - 1;
        char temp;
        for (int i = 0; i <= (length1 - 1) / 2; i++) {
            temp = s1[i];
            s1[i] = s1[j];
            s1[j] = temp;
            j--;
        }
        cout << "The Reversed String is:\n";
        cout << s1;
    }
    else
    {
        cout << "The two strings: ";
        cout << s1 << " and " << s2 << " are NOT the same \n";
    }
    /*
    cout << "\n Let's reverse the String and see if the string is a palindrome:\n";
    strncat_s(s1, s2, 20);
    length3 = strlen(s1);
    j = length3 - 1;
    char temp;
    for (int i = 0; i <= (length3-1)/2; i++) {
        temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
        j--;
    }
    cout << "The Reversed String is:\n";
    cout << s1;
    */


    /*
    char string1[10];
    char string2[10];
    cout << "Enter 2 String inputs\n";
    cin >> string1 >> string2;
    strncat_s(string1, string2, 5);
    */

    char cString1[50];
    char cString2[50];
    //char combinedString[150];
    cout << "Enter a candidate for palindrome test\n";
    cin >> cString1 >> cString2;
    //cin >> cString2;
    strcat_s(cString1, cString2);
    //cout << cString1; // test print of the string 
    if (isPal(cString1))
        cout << "\"" << cString1 << "\" is a palindrome.";
    else
        cout << "\"" << cString1 << "\" is not a palindrome.";
    cout << endl;
    return  0;
}

bool isPal(char str[] ) {
    int mid = strlen(str) / 2;
    int length = strlen(str); 
    for (int i = 0; i < length; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
        else {
            return true;
        }
    }
}


