#ifndef stockdetails_h
#define stockdetails_h
#include "productdetails.h"
class stockdetails
{
    private:int typesofproavail;
            productdetails *pro;
            int *quantityofeachpro;

    public:void viewstock();
            void updatestock();
            void addstock();
            void findshortitems();
            void set_typesofpro();
            void set_products();
            void set_quantity();
            int get_typesofpro();
            productdetails get_products();
            int get_quantity();

};
#endif
