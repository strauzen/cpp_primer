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
    int i = 0;

    while (i < s.size())
    {
        char &c = s[i];
        c = 'X';
        i++;
    }

    cout << s << endl;

    return 0;
}