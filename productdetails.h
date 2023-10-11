#ifndef productdetails_h
#define productdetails_h
#include "date.h"
class productdetails
{
    private:char proname[25];
            int productcode;
            double price;
            double purchase_price;
            date expiry_date;
            date manu_date;
    public: void showproductdetail();
            void set_proname();
            void set_productcode();
            void set_price();
            void set_pprice();
            void set_mdate();
            void set_edate();
            char* get_proname();
            int get_productcode();
            double get_price();
            double get_pprice();
            date get_mdate();
            date get_edate();
};
#endif
