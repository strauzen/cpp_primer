/**
 * Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators
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
    for (auto it = v.begin(), it2 = v.end(); it != it2; it++)
    {
        if (it != v.size() - i - 1)
        {
            solution.push_back(v[i] + v[v.size() - i - 1]);
        }
        else
        {
            solution.push_back(v[i]);
        }
        it2 = it2 - it;
    }

    cout << "The solution is: " << endl;
    for (int x : solution)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}