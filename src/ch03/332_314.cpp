/**
 * Exercise 3.14: Write a program to read a sequence of ints from cin and
 * store those values in a vector.
**/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Please enter a sequence of ints, they will be stored in memory:" << endl;

    int value;
    vector<int> values;

    while (cin >> value)
    {
        values.push_back(value);
    }

    cout << "The values stored in memory are:" << endl;

    for (int i : values)
    {
        cout << i << ", ";
    }

    return 0;
}