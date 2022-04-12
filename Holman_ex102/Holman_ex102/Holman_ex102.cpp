// P10_2a.cpp - This program demonstrates the use of functions associated 
// with the string class 
// 8.7
#include<iostream> 
#include<string> 
using namespace std;
int main()
{
    string phrase, temp1, temp2;
    string adjective("fried"), noun("ants");
    string wish = "Bon appetite!";
    phrase = "I love " + adjective + " " + noun + "!";
    cout << phrase << endl
        << wish << endl;
    // copy phrase to newphrase 
    string newphrase(phrase);
    // append wish to the end of newpharase 
    newphrase += wish;
    // separates the first sentence 
    temp1 = newphrase.substr(0, 18);
    cout << temp1 << endl;
    // separates the second sentence 
    temp2 = newphrase.substr(18, 10);
    cout << temp2 << endl;
    return 0;
}