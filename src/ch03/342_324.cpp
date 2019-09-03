/**
 * Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators
 **/

#include <iostream>
#include <vector>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::iterator;
using std::vector;

int main()
{
    int in;
    vector<int> v;
    while (cin >> in)
    {
        v.push_back(in);
    }

    vector<int> solution;
    auto begin = v.begin();
    auto end = v.end();
    auto mid = v.begin() + (end - begin) / 2;
    begin = mid + 1;
    for (; begin != end; it++)
    {
        if (it != (v.end() - it) - 1)
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