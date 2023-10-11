#include <iostream>
#include "productdetails.h"

using namespace std;

void productdetails::set_proname()
{
    cout<<"Product name:";
    cin>>proname;
}

void productdetails::set_productcode()
{
    cout<<"Product code:";
    cin>>productcode;
}

void productdetails::set_price()
{
    cout<<"Price:";
    cin>>price;

}

void productdetails::set_pprice()
{
    cout<<"Purchase price:";
    cin>>purchase_price;
}

void productdetails::set_mdate()
{
    cout<<"manufacturing date:"<<endl;
    manu_date.set_day();
    manu_date.set_date();
    manu_date.set_month();
    manu_date.set_year();
}

void productdetails::set_edate()
{
    cout<<"Expiry date:"<<endl;
    expiry_date.set_day();
    expiry_date.set_date();
    expiry_date.set_month();
    expiry_date.set_year();
}

char* productdetails::get_proname()
{
    return proname;
}

int productdetails::get_productcode()
{
    return productcode;
}

double productdetails::get_price()
{
    return price;
}

double productdetails::get_pprice()
{
    return purchase_price;
}

date productdetails::get_mdate()
{
    return manu_date;
}

date productdetails::get_edate()
{
    return expiry_date;
}

void productdetails::showproductdetail()
{
    cout<<"product name:"<<proname<<endl;
    cout<<"Product code:"<<productcode<<endl;
    cout<<"Price:"<<price<<endl;
    cout<<"Purchase price:"<<purchase_price<<endl;
    cout<<"Manufacture date:";
    manu_date.displaydate();
    cout<<"Expiry date:";
    expiry_date.displaydate();
    cout<<endl;
}
