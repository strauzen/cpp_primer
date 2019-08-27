/**
 * Exercises Section 2.6.3
 * Exercise 2.42: Write your own version of the Sales_data.h header and
 * use it to rewrite the exercise from § 2.6.2 (p. 76).
**/

#include <iostream>
#include "SalesData.h"

int main() {

    SalesData data1, data2;
    double price = 0.0;

    // Read the first book
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cout << "You successfully added the book: " << data1.bookNo << std::endl; 

    // Read the second book
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;
    std::cout << "You successfully added the book: " << data2.bookNo << std::endl; 


    if ( data1.bookNo == data2.bookNo) {
        data1.units_sold += data2.units_sold;
        data1.revenue += data2.revenue;

        std::cout << data1.bookNo << " " << data1.units_sold << " " << data1.revenue << " "
            << (data1.revenue / data1.units_sold) << std::endl;

        return 0;
    }

    std::cout << "The provided books isbn numbers do not match."; 

    return -1;
}