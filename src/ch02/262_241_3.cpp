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

    Sales_data data1, data2;
    double price = 0.0;

    // Read the first book
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    std::cout << "You successfully added the book: " << data1.bookNo << std::endl; 

    while (std::cin >> data2.bookNo) {

        std::cin >> data2.units_sold >> price;
        data2.revenue = data2.units_sold * price;
        std::cout << "You successfully added the book: " << data2.bookNo << std::endl;

        if ( data1.bookNo == data2.bookNo) {
            data1.units_sold += data2.units_sold;
            data1.revenue += data2.revenue;

        } else {
            std::cout << "Finished adding book \"" << data1.bookNo << "\" the final sales data is: " 
                << data1.units_sold << " " << data1.revenue << " "
                << (data1.revenue / data1.units_sold) << std::endl;

            data1.bookNo = data2.bookNo;
            data1.revenue = data2.revenue;
            data1.units_sold = data2.units_sold;
        }    
    }

    return 0;
}