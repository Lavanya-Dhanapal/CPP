#include <iostream>
#include "stockdetails.h"

using namespace std;

void stockdetails::set_typesofpro()
{
    cout<<"types of product:";
    cin>>typesofproavail;
}

void stockdetails::set_products()
{
    pro = new productdetails[typesofproavail];
    quantityofeachpro = new int[typesofproavail];
    for(int i=0;i<=typesofproavail;i++)
    {
        productdetails *n=new productdetails;
        n->set_proname();
        n->set_productcode();
        n->set_price();
        n->set_pprice();
        n->set_mdate();
        n->set_edate();
        pro[i] =  *n;
        int temp;
        cout<<"quantity:";
        cin>>temp;
        quantityofeachpro[i]=temp;

    }

}

void stockdetails::viewstock()
{
    cout<<"types of product available: "<<typesofproavail<<endl;
    for ( int i=0 ;i<=typesofproavail ; i++)
    {
        pro[i].showproductdetail();
        cout<<"Quantity:"<<quantityofeachpro[i]<<endl;
    }
}


