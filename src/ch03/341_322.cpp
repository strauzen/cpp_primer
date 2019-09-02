/**
 * Exercise 3.22: Revise the loop that printed the first paragraph in text to
 * instead change the elements in text that correspond to the first paragraph
 * to all uppercase. After you’ve updated text, print its contents.
 **/

#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{

    vector<string> text;
    string aux;

    while (getline(cin, aux))
    {
        text.push_back(aux);
    }

    // print each line in text up to the first blank line
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (char &c : *it) {
            if (isalpha(c)) {
                c = toupper(c);
            }
        }
        cout << *it << endl;
    }
        
    return 0;
}