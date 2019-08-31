#ifndef SALESDATA_H
#define SALESDATA_H

#include <string>

struct SalesData
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif