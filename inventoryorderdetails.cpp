#include<iostream>
#include "inventoryorderdetail.h"
#include <fstream>

using namespace std;

void inventoryorderdetail::set_orderdetails()
{
    cout<<"No of types of product:";
    cin>>nooftypesofproducts;
    products = new productdetails[nooftypesofproducts];
    quantity = new int[nooftypesofproducts];
    for(int i=0;i<=nooftypesofproducts-1;i++)
    {
        int temp;
        productdetails *n=new productdetails;
        n->set_proname();
        n->set_productcode();
        n->set_price();
        n->set_pprice();
        n->set_mdate();
        n->set_edate();
        products[i] = *n;
        cout<< "quantity:";
        cin >>temp ;
        quantity[i] = temp;

    }
    cout<<"Supplier:"<<endl;
    supplier.set_name();
    supplier.set_address();
    supplier.set_phonenumber();

}

void inventoryorderdetail::showorderdetails()
{
    cout<<"No of type of products "<<nooftypesofproducts<<endl;
    for ( int i=0 ;i<=nooftypesofproducts-1; i++)
    {
        products[i].showproductdetail();
        cout<<"Quantity:"<<quantity[i]<<endl;
    }
    supplier.viewperson();

}

int inventoryorderdetail::get_types()
{
    return nooftypesofproducts;
}

void set_products(inventoryorderdetail &order)
{
    ofstream fo("temporders.txt",ios::app|ios::binary);
    fo.write((char*)&order ,sizeof(order));
    fo.close();
    ofstream fp("temp.txt", ios::app|ios::binary);
    for (int k=0 ; k<=order.get_types()-1;k++)
    {
        fp.write((char*) &order.products[k] ,sizeof(order.products[k]));
    }
    fp.close();
    cout<<endl;

}

void inventoryorderdetail::calculatepurchaseprice()
{
    for(int  i = 0 ; i <= nooftypesofproducts ; i++)
    {
        totalpurchaseprice += products[i].get_pprice();
    }
}


