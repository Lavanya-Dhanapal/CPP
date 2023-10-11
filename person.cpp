#include<iostream>
#include"person.h"

using namespace std;

void person::set_name()
{
    cout<<"Name:";
    cin>>name;
}

void person::set_phonenumber()
{
    cout<<"Phone number:";
    cin>>phonenumber;
}

void person::set_address()
{
    cout<<"Address:";
    cin>>address;
}

void person::viewperson()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Phone number:"<<phonenumber<<endl;
    cout<<"Address:"<<address<<endl;

}

char* person::get_name()
{
    return name;
}

long person::get_phone()
{
    return phonenumber;
}

char* person::get_address()
{
    return address;
}

