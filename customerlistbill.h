#include "stockdetails.h"
#include "date.h"
#include "person.h"
class customerlistbill
{
    private :int noofitems;
            char** iname;
            double *pprice;
            int  *quantity;
            double totalamount;
            double discount;
            double subtotal;
            double profit;
            person customer;
            date billdate;

    public: double calculatetotal();
            double calculatediscount();
            double calculateprofit();
            void set_items();
            int get_noofitems();
            void billprint();
            friend void set_things(customerlistbill &);


};
