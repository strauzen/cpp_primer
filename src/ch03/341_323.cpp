/**
 * Exercise 3.23: Write a program to create a vector with ten int elements.
 * Using an iterator, assign each element a value that is twice its current value.
 * Test your program by printing the vector.
 **/

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto it = numbers.begin(); it != numbers.end(); it++) 
    {
        *it *= 2;
    }

    for(auto number : numbers)
    {
        cout << number << " ";
    }

    return 0;
}