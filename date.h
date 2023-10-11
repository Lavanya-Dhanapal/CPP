#ifndef date_h
#define date_h

class date
{
    private:char day[10];
            int date;
            int month;
            int year;
    public:void displaydate();
            void set_day();
            void  set_date();
            void set_month();
            void set_year();
            char* get_day();
            int  get_date();
            int get_month();
            int get_year();
};

#endif
