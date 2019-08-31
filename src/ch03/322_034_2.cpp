/**
 * Exercise 3.4: Write a program to read two strings and report whether the
 * strings are equal. If not, report which of the two is larger. Now, change
 * the program to report whether the strings have the same length, and if
 * not, report which is longer.
**/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1, s2;

    cout << "Please write two strings: " << endl;
    cin >> s1 >> s2;

    if (s1.size() == s2.size())
        cout << "The strings are of equal lenght." << endl;
    else if (s1.size() > s2.size())
        cout << "The string: " + s1 + " is longer than: " + s2 << endl;
    else
        cout << "The string: " + s2 + " is larger than: " + s1 << endl;
}