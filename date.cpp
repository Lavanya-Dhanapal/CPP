#include<iostream>
#include"date.h"

using namespace std;

void date::set_day()
{
    cout<<"Day:";
    cin>>day;
}

void date::set_date()
{
    cout<<"Date:";
    cin>>date;
}

void date::set_month()
{
    cout<<"Month:";
    cin>>month;

}

void date::set_year()
{
    cout<<"Year:";
    cin>>year;
}

char* date::get_day()
{
    return day;
}

int date::get_date()
{
    return date;
}

int date::get_month()
{
    return month;
}

int date::get_year()
{
    return year;
}

void date::displaydate()
{
    cout<<day<<"  "<<date<<"/"<<month<<"/"<<year<<endl;
}
