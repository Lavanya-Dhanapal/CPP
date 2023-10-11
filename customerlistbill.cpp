#include <iostream>
#include "customerlistbill.h"
#include<fstream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void customerlistbill::set_items()
{
    cout<<"Customer:"<<endl;
    customer.set_name();
    customer.set_address();
    customer.set_phonenumber();
    discount=0.12;
    totalamount=0;
    subtotal=0;
    billdate.set_day();
    billdate.set_date();
    billdate.set_month();
    billdate.set_year();
    cout<<"no of items:";
    cin>>noofitems;

}

double customerlistbill::calculatetotal()
{
    for(int k=0;k<=noofitems-1 ;k++)
    {
        totalamount += (pprice[k]*quantity[k]);
    }
    return totalamount;
}

double customerlistbill::calculatediscount()
{
    subtotal = (totalamount*discount) - totalamount;
    return subtotal;
}

double customerlistbill::calculateprofit()
{
    return (totalamount - subtotal);
}

int customerlistbill::get_noofitems()
{
    return  noofitems;
}

void  customerlistbill::billprint()
{
    billdate.displaydate();
    customer.viewperson();
    for(int k=0 ;k<=noofitems-1 ; k++)
    {
        cout<<k+1<<"."<<iname[k]<<"\t\t"<<pprice[k]<<"\t\t"<<quantity[k]<<endl;
    }
    cout<<"Total amount:"<<totalamount<<endl;
    cout<<"Sub total:"<<discount<<endl;
    cout<<"Profit:"<<profit<<endl;
    getch();

}

void set_things(customerlistbill &bill)
{
    char pname[25];
    bill.iname = new char*[25];
    bill.quantity = new int[bill.noofitems];
    bill.pprice = new double[bill.noofitems];
    ifstream f("temp.txt",ios::in);
    for (int j=0;j <= bill.noofitems-1 ;j++ )
    {
        cout<<"item  name:";
        cin>>pname;
        productdetails p;
        while(f.read((char*)&p,sizeof(p)))
        {
            if(strcmp(p.get_proname(),pname)==0)
            {
                strcpy(bill.iname[j],pname);
                bill.pprice[j]=p.get_pprice();
                cout<<"quantity:";
                cin>>bill.quantity[j];
                break;
            }
            //getch();

        }

    }
    bill.totalamount=bill.calculatetotal();
    bill.subtotal=bill.calculatediscount();
    bill.profit=bill.calculateprofit();
    f.close();
    system("cls");
    bill.billprint();
    ofstream fc("tempcust.txt",ios::app|ios::binary);
    fc.write((char*)&bill,sizeof(bill));
    fc.close();
    delete []bill.quantity;
    delete []bill.pprice;
    delete []bill.iname;

