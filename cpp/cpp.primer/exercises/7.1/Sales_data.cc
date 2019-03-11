#include <iostream>
#include <string>

struct Sales_data {
    std::string isbn() const{return bookNo;};
    Sales_data &combine(const Sales_data &);
    double avgPrice() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue;
};

Sales_data &Sales_data::combine(const Sales_data &sale)
{
    units_sold += sale.units_sold;
    revenue += sale.revenue;
    return *this;
}

double Sales_data::avgPrice() const{
    if (units_sold>0)
        return revenue/units_sold;
    else
        return 0;
}

std::istream &read(std::istream &is,Sales_data &item){
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold*price;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item){
    //os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avgPrice();
    return os;
}

int main()
{
    Sales_data total,temp;
    //double price;
    //if (cin >> total.bookNo >> total.units_sold >> price)
    if (read(std::cin,total))
    {
        //total.revenue = total.units_sold*price;
        //while (cin >> temp.bookNo >> temp.units_sold >> price)
        while (read(std::cin,temp))
        {
            if (total.isbn()==temp.isbn())
            {
                total.combine(temp);
            }
            else
            {
                print(std::cout,total) << std::endl;
                //cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl; 
                total = temp;
            }
        }
        //cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl; 
        print(std::cout,total) << std::endl;
    }
    else
    {
        std::cerr << "No new data!" << std::endl;
        return -1;
    }
    return 0;

}

