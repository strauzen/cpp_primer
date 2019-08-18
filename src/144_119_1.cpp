/**
 * Excersize 1.9: Write a program that uses a while to sum the numbers from 50 to 100. 
 **/

#include <iostream>

int main() {
    int v1 = 100, v2 = 50, sum = 0, i = 0, j = 0;

    if (v1 >= v2) {
        i = v2;
        j = v1;
    } else {
        i = v1;
        j = v2;
    }

    while (i <= j) {
        sum += i;
        ++i;
    }

    std::cout << "The sum of " << v1 << " to " << v2 << " inclusive is: " << sum << std::endl;

    return 0;
}