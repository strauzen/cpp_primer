/**
 * Exercise 1.23: Write a program that reads several transactions and counts
 * how many transactions occur for each ISBN.
 **/

#include "../include/Sales_item.h"
#include <iostream>

int main()
{

    Sales_item total;

    std::cout << "Please enter a transaction: " << std::endl;

    if (std::cin >> total)
    {
        Sales_item current;
        int count = 1;

        while (std::cin >> current)
        {
            if (total.isbn() == current.isbn())
                ++count;
            else
            {
                std::cout << "The total number of " << total.isbn() << " transactions is: " << count << std::endl;
                total = current;
                count = 1;
            }
        }

        std::cout << "The total number of transactions is: " << count << std::endl;

        return 0;
    }
    else
    {
        std::cout << "No data!" << std::endl;
        return -1;
    }
}