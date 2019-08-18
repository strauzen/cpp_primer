/**
 * Exercise 1.21: Write a program that reads two Sales_item objects that
 * have the same ISBN and produces their sum.
**/

#include <iostream>
#include "../include/Sales_item.h"

int main() {

    Sales_item item1, item2;

    std::cout << "Please add item 1 [Isbn, units sold, price]: " << std::endl;
    std::cin >> item1;
    std::cout << "Please add item 2 [Isbn, units sold, price]: " << std::endl;
    std::cin >> item2;

    if (item1.isbn() == item2.isbn()) {
        std::cout << "Data has been updated [Isbn, units sold, revenue, average price]: " 
            << item1 + item2 << std::endl;
            return 0;
    } else {
        std::cout << "The given items' isbn doesn't match";
        return -1;
    }

    return 0;
}