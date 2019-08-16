/**
 * Excersize 1.9: Write a program that uses a while to sum the numbers from 50 to 100. 
 **/

#include <iostream>

int main() {
    int v1 = 50, v2 = 100, sum = 0, i = v1;

    while (i <= v2) {
        sum += i;
        ++i;
    }

    std::cout << "The sum of " << v1 << " to " << v2 << " inclusive is: " << sum << std::endl;

    return 0;
}