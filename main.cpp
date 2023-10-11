#include <iostream>
#include <fstream>
#include "productdetails.h"
#include <stdlib.h>
#include "inventoryorderdetail.h"
#include "customerlistbill.h"
#include <string.h>
#include <conio.h>

using namespace std;

void mainmenu();
void employeemenu();
void customermenu();
void makeorders();
void reviewstock();
void billentry();
void printbill();

int main()
{

    cout<<"      SS  store     "<<endl;
    mainmenu();
    system("cls");


}

void mainmenu()
{
    int  mmenu;
    cout<<"Main menu"<<endl;
    cout<<"1.employee"<<endl;
    cout<<"2.customer"<<endl;
    cout<<"3.exit"<<endl;

    cout<<"enter your choice:";
    cin>>mmenu;

    switch(mmenu)
    {
        case 1:system("cls");
                employeemenu();
                break;
        case 2:system("cls");
                customermenu();
                break;
        case 3:system("cls");
                cout<<"  Thank you ";
                exit(0);
        default :cout<<" invalid input!!!!"<<endl<<endl;
                system("cls");
                 mainmenu();
                 break;

    }
}

void employeemenu()
{
    int  emenu;
    cout<<"1.inventory order"<<endl;
    cout<<"2.review stock"<<endl;
    cout<<"3.back  to  main menu"<<endl;

    cout<<"enter your choice :";
    cin>>emenu;
    switch(emenu)
    {
        case 1:makeorders();
                break;
        case 2:reviewstock();
                break;
        case 3:mainmenu();
        default :cout<<"invalid input!!!";
                  system("cls");
                 employeemenu();
    }
}

void customermenu()
{
    int  cmenu;
    cout<<"1.bill  entry"<<endl;
    cout<<"2.print  bill"<<endl;
    cout<<"3.back  to main menu"<<endl;

    cout<<"enter your choice;";
    cin>>cmenu;

    switch(cmenu)
    {
        case 1:billentry();
                break;
        case 2:printbill();
                break;
        case 3:mainmenu();
                break;
        default:cout<<"invalid input!!!"<<endl;
                system("cls");
                customermenu();
    }
}

void makeorders()
{
    inventoryorderdetail order;
    order.set_orderdetails();
    set_products(order);
    system("cls");
    employeemenu();
}

void reviewstock()
{
    productdetails p;
    ifstream f2("temp.txt" ,ios::in);
    while(f2.read((char*)&p  ,sizeof(p)))
        p.showproductdetail();
        cout<<endl;
    f2.close();
    getch();
    cout<<endl;
    system("cls");
    employeemenu();
}


void billentry()
{
    customerlistbill bill;
    bill.set_items();
    set_things(bill);
    cout<<endl;
    getch();
    system("cls");
    customermenu();
}

void printbill()
{
    customerlistbill  c;
    ifstream cf("tempcust.txt",ios::in);
    while(cf.read((char*)&c,sizeof(c)));
    cf.seekg(cf.tellg()-sizeof(c));
    cf.read((char*)&c,sizeof(c));
    c.billprint();
    cf.close();
    cout<<endl<<endl;
    system("cls");
    customermenu();
}




