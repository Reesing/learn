#include <iostream>
#include <string>
using namespace std;

struct Sales_data {
    string isbn() {return bookNo;};
    Sales_data combine(Sales_data &);

    string bookNo;
    unsigned units_sold = 0;
    double revenue;
};

Sales_data Sales_data::combine(Sales_data &sale)
{
    units_sold += sale.units_sold;
    revenue += sale.revenue;
    return *this;
}


int main()
{
    return 0;

}

