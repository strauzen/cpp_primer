/**
 * Exercise 3.20: Read a set of integers into a vector. Print the sum of each
 * pair of adjacent elements. Change your program so that it prints the sum of
 * the first and last elements, followed by the sum of the second and second-tolast, and so on.
**/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int in;
    vector<int> v;
    while (cin >> in)
    {
        v.push_back(in);
    }

    vector<int> solution;
    for (int i = 0; i < v.size(); i += 2)
    {
        if(i+1 <= v.size()) {
            solution.push_back(v[i] + v[i + 1]);
        }
        else
        {
            solution.push_back(v[i]);
        }
    }

    cout << "The solution is: " << endl;
    for(int x : solution) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}