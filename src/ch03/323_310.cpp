/**
 * Exercise 3.10: Write a program that reads a string of characters including
 * punctuation and writes what was read but with the punctuation removed.
 **/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Please type something, we will remove punctuation:" << endl;
    getline(cin, input);

    string output;
    for (auto c : input)
    {
        if (!ispunct(c))
            output += c;
    }

    cout << output;

    return 0;
}
