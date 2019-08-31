/**
 * Exercise 3.15: Repeat the previous program but read strings this time.
 **/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string words;
    vector<string> text;

    cout << "Please input a series of strings, we will store them into memory:" << endl;

    while(getline(cin, words)) {
        text.push_back(words);
    }

    cout << "The values stored in memory are: " << endl;

    for (string word : text) {
        cout << word;
    }

    return 0;
}