/**
 * Exercise 3.6: Use a range for to change all the characters in a string to
 * X.
 **/

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s("This is a test string for the excesize");

    for (auto &c : s)
    {
        c = 'X';
    }

    cout << s << endl;

    return 0;
    
}