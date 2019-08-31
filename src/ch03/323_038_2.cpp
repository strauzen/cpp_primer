/**
 * Exercise 3.8: Rewrite the program in the first exercise, first using a while
 * and again using a traditional for loop. Which of the three approaches do
 * you prefer and why?
 **/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("aaa");

    for (int i = 0; i < s.size(); i++)
    {
        char &c = s[i];
        c = 'X';
    }

    cout << s << endl;

    return 0;
}