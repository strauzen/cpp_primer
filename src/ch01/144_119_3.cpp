/**
 * Exercise 1.11: Write a program that prompts the user for two integers. Print each number in
 * the range specified by those two integers
 **/

#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;

    std::cout << "Please input two values:" << std::endl;
    std::cin >> v1 >> v2;

    if (v1 > v2)
    {
        int aux = v1;
        v1 = v2;
        v2 = aux;
    }

    std::cout << "The values between " << v1 << " and " << v2 << " inclusive, are: " << std::endl;

    while (v1 <= v2)
    {
        std::cout << v1 << ", ";
        ++v1;
    }

    std::cout << std::endl;

    return 0;
}