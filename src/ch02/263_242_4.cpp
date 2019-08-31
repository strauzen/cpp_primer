/**
 * Exercises Section 2.6.3
 * Exercise 2.42: Write your own version of the Sales_data.h header and
 * use it to rewrite the exercise from § 2.6.2 (p. 76).
**/

#include "SalesData.h"
#include <iostream>

int main()
{

    SalesData data1, data2;
    double price = 0.0;

    // Read the first book
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cout << "You successfully added the book: " << data1.bookNo << std::endl;

    int count = 1;
    while (std::cin >> data2.bookNo)
    {
        std::cin >> data2.units_sold >> price;
        data2.revenue = data2.units_sold * price;
        std::cout << "You successfully added the book: " << data2.bookNo << std::endl;

        if (data1.bookNo == data2.bookNo)
        {
            ++count;
        }
        else
        {
            std::cout << "Finished adding book \"" << data1.bookNo << "\" the final transaction count is: "
                      << count << std::endl;

            data1.bookNo = data2.bookNo;
            data1.revenue = data2.revenue;
            data1.units_sold = data2.units_sold;
            count = 1;
        }
    }

    return 0;
}