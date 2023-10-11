#include "stockdetails.h"
#include "person.h"
class inventoryorderdetail
{
    private:int nooftypesofproducts;
            double totalpurchaseprice;
            productdetails *products;
            int *quantity;
            date date_purchase;
            person supplier;

    public:void showorderdetails();
           void calculatepurchaseprice();
           void set_orderdetails();
           int get_types();
           friend void set_products(inventoryorderdetail &);

};
