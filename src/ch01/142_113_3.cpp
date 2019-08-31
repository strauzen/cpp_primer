/**
 * Excersize 1.10: In addition to the ++ operator that adds 1 to its operand, there is a decrement
 * operator (--) that subtracts 1. Use the decrement operator to write a for that prints the 
 * numbers from ten down to zero. 
 */

#include <iostream>

int main()
{

    for (int val = 10; val >= 0; val--)
    {
        std::cout << val << " ";
    }

    return 0;
}