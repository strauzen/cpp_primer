/**
 * Exercises Section 2.6.2
 * Exercise 2.41: Use your Sales_data class to rewrite the exercises in §
 * 1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define
 * your Sales_data class in the same file as your main function.
**/

#include <string>
#include <iostream>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {

    Sales_data data;
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