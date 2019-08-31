/**
 * Exercises Section 2.6.3
 * Exercise 2.42: Write your own version of the Sales_data.h header and
 * use it to rewrite the exercise from § 2.6.2 (p. 76).
**/

#include "SalesData.h"
#include <iostream>

int main()
{

    SalesData data;
    while (std::cin >> data.bookNo)
    {
        double price;
        std::cin >> data.units_sold >> price;
        data.revenue = data.units_sold * price;

        std::cout << data.bookNo << " " << data.units_sold << " " << data.revenue << " "
                  << (data.revenue / data.units_sold);
    }

    return 0;
}