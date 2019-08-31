/**
 * Exercise 3.2: Write a program to read the standard input a line at a time.
 * Modify your program to read a word at a time.
 **/
#include <iostream>
#include <string>

using namespace std;

void readLine()
{
    string line;

    while (getline(cin, line))
    {
        cout << line << endl;
    }
}

void readWord()
{
    string word;

    while (cin >> word)
    {
        cout << word << endl;
    }
}

int main()
{
    int option = 0;

    cout << "Do you want to read lines (1) or words (2): " << endl;
    cin >> option;
    cout << "Please type something:" << endl;

    switch (option)
    {
    case 1:
        readLine();
        break;
    case 2:
        readWord();
        break;
    default:
        cout << "No valid option selected, exiting program." << endl;
        break;
    }

    return 0;
}