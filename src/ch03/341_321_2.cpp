/**
 * Exercise 3.17: Read a sequence of words from cin and store the values a
 * vector. After you’ve read all the words, process the vector and change
 * each word to uppercase. Print the transformed elements, eight words to a
 * line.
 **/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string aux;
    vector<string> v1;

    while (cin >> aux)
    {
        v1.push_back(aux);
    }

    auto str = v1.begin();
    for (str; str != v1.end(); str++)
    {
        auto c = (*str).begin();
        for (c; c != (*str).end(); c++)
        {
            if (isalpha(*c))
                *c = toupper(*c);
        }

        cout << *str << " ";
    }

    return 0;
}