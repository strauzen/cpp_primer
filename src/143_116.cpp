/**
 * Exercise 1.16: Write your own version of a program that prints the sum of
 * a set of integers read from cin.
*/

#include <iostream>

int main() {
    int value = 0, sum = 0;

    std::cout << "Please provide a list of values you would like"
        << "to add up. Press Ctrl+d to calculate." << std::endl;

    while(std::cin >> value) 
        sum += value;

    std::cout << "The sum of the given numbers is: " << sum << std::endl;   

    return 0;
}