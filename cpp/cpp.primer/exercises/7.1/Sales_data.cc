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
    Sales_data total,temp;
    double price;
    if (cin >> total.bookNo >> total.units_sold >> price)
    {
        total.revenue = total.units_sold*price;
        while (cin >> temp.bookNo >> temp.units_sold >> price)
        {
            if (total.isbn()==temp.isbn())
            {
                total.combine(temp);
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl; 
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl; 
    }
    else
    {
        cerr << "No new data!" << endl;
        return -1;
    }
    return 0;

}

