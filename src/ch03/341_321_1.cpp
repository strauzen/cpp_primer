/**
 * Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105) using iterators
 **/

/**
 * Exercise 3.16: Write a program to print the size and contents of the
 * vectors from exercise 3.13. Check whether your answers to that exercise
 * were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you
 * were wrong.
 **/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printVector(vector<int> v)
{

    cout << "Vector size: " << v.size() << endl;
    cout << "Vector contents:" << endl;

    auto it = v.begin();
    for (it; it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}

void printVector(vector<string> v)
{
    cout << "Vector size: " << v.size() << endl;
    cout << "Vector contents:" << endl;

    auto it = v.begin();
    for (it; it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\n"
         << endl;
}

int main()
{

    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "Vector "
         << "v1"
         << " contains the following:" << endl;
    printVector(v1);

    cout << "Vector "
         << "v2"
         << " contains the following:" << endl;
    printVector(v2);

    cout << "Vector "
         << "v3"
         << " contains the following:" << endl;
    printVector(v3);

    cout << "Vector "
         << "v4"
         << " contains the following:" << endl;
    printVector(v4);

    cout << "Vector "
         << "v5"
         << " contains the following:" << endl;
    printVector(v5);

    cout << "Vector "
         << "v6"
         << " contains the following:" << endl;
    printVector(v6);

    cout << "Vector "
         << "v7"
         << " contains the following:" << endl;
    printVector(v7);

    return 0;
}