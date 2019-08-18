/**
 * Exercise 1.22: Write a program that reads several transactions for the same
 * ISBN. Write the sum of all the transactions that were read.
**/

#include <iostream>
#include "../include/Sales_item.h"

int main() {

    Sales_item item1, aux;

    std::cout << "Please add an item [Isbn, units sold, price]: ";
    std::cin >> item1;

    std::cout << "Please add an item [Isbn, units sold, price]: ";
    while(std::cin >> aux) {
        if (item1.isbn() == aux.isbn()) {
            item1 += aux;
            std::cout << "The running count is [Isbn, units sold, revenue, avg. price]: " 
                << item1 << std::endl;
        } else {
            std::cout << std::endl << "The total count for " << item1.isbn() 
                << " is [Isbn, units sold, revenue, avg. price]: " << std::endl << item1 
                << std::endl << std::endl;
            item1 = aux;
            std::cout << "Starting a new sum for " << item1.isbn() << std::endl;
        }
        std::cout << "Please add an item [Isbn, units sold, price]: ";

    }

    std::cout << std::endl << std::endl << "The total count for " << item1.isbn() 
        << " is [Isbn, units sold, revenue, avg. price]: " << std::endl << item1 
        << std::endl << std::endl;

    return 0;
}