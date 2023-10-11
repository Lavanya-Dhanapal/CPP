#ifndef person_h
#define person_h

class person
{
    private :char name[20];
            long phonenumber;
            char address[30];
    public: void viewperson();
            char* get_name();
            long get_phone();
            char*  get_address();
            void set_name();
            void set_phonenumber();
            void set_address();
};
#endif
