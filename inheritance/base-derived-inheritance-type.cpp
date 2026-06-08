#include<iostream>

class Base
{
    private:
        int private_num;

    protected:
        int protected_num;

    public:
        int public_num;

    public:
        void base_member_function()
        {
            this->private_num = 10;
            this->protected_num = 20;
            this->public_num = 30;

            Base bobj;
            bobj.private_num;
            bobj.protected_num;
            bobj.public_num;
        }
};

class Derived:public Base
{
    public:
        void derived_member_function()
        {
            this->public_num = 40;
            this->protected_num = 50;
            this->private_num = 60;     // CTE:private_num is inaccessible here,

            Base bobj;
            bobj.public_num = 70; 
            bobj.protected_num = 80;   // CTE:protected_num is inaccessible here
            bobj.private_num = 90;    // CTE:privat_num is inaccessible here
        }
};

void external_function_testing_with_base_object(void);

int main()
{
    return 0;
}

void external_function_testing_with_base_object(void)
{
    Base bobj;
    bobj.public_num;
    //bobj.private_num; // CTE:private_num is inaccessible. Note:see the declaration of Base
   // bobj.protected_num; // CTE:protected_num is inaccesible. Note:see the declaration of Base

   Derived dobj;
   dobj.public_num;
   dobj.protected_num;
   dobj.privat_num;
}