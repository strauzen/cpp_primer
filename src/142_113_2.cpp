/**
 * Exercise 1.11: Write a program that prompts the user for two integers. Print each number in
 * the range specified by those two integers. Use a for loop.
 **/

#include <iostream>

int main() {
    int v1 = 0, v2 = 0;

    std::cout << "Please input two values:" << std::endl;
    std::cin >> v1 >> v2; 
    std::cout << "The values between " << v1 << " and " << v2 << "inclisve, are: " << std::endl;

    for (int i = v1; i <= v2; i++) {
        std::cout << i << ", ";
    }

    return 0;
}