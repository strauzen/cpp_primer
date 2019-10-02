/**
 * Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators: 
 * Read a set of integers into a vector. Print the sum of each
 * pair of adjacent elements. Change your program so that it prints the sum of
 * the first and last elements, followed by the sum of the second and second-tolast, 
 * and so on.
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
    auto it = solution.begin();

    for (auto begin = v.begin(), end = v.end() - 1; begin <= end; begin++, end--, it++)
    {
        solution.push_back(*begin + *end);
    }

    cout << "The solution is: " << endl;
    for (int x : solution)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}