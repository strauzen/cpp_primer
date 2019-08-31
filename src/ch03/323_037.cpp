/**
 * Exercise 3.7: What would happen if you define the loop control variable in
 * the previous exercise as type char? Predict the results and then change your
 * program to use a char to see if you were right.
 **/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("This is a test string for the excesize");

    for (char &c : s)
    {
        c = 'X';
    }

    cout << s << endl;

    return 0;
}