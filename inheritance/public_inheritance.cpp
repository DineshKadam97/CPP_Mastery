#include<iostream>

class Base
{
    private:
        int Base_private_num;

    protected:
        int Base_protected_num;

    public:
        int Base_public_num;

    public:
        void base_member_function()
        {
            this->Base_private_num = 10;
            this->Base_protected_num = 20;
            this->Base_public_num = 30;

            Base bobj;
            bobj.Base_private_num;
            bobj.Base_protected_num;
            bobj.Base_public_num;
        }
};

class Derived_1:public Base
{
    private:
        int Derived_1_private_num;

    protected:
        int Derived_1_protected_num;

    public:
        int Derived_1_public_num;

    public:
        void derived_member_function()
        {
            this->Base_public_num = 40;
            this->Base_protected_num = 50;
            this->Base_private_num = 60;     // CTE:private_num is inaccessible here,

            Base bobj;
            bobj.Base_public_num = 70; 
            bobj.protected_num = 80;   // CTE:protected_num is inaccessible here
            bobj.Base_private_num = 90;    // CTE:privat_num is inaccessible here
        }
};

class Derived_2 : public Derived_1
{
    public:
        void derived_2_member_function()
        {
            this->Base_public_num = 100;
            this->Base_protected_num = 110;
            this->Base_private_num = 2534; // CTE

            this->Derived_1_public_num = 245;
            this->Derived_1_protected_num = 345;
            this->Derived_1_private_num = 4234; // CTE
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
    bobj.Base_public_num;
    //bobj.private_num; // CTE:private_num is inaccessible. Note:see the declaration of Base
   // bobj.protected_num; // CTE:protected_num is inaccesible. Note:see the declaration of Base

   Derived_2 d2obj;
   d2obj.Derived_1_public_num = 234;
   d2obj.Derived_1_protected_num = 24234; // CTE

   d2obj.Base_public_num = 2453;
   d2obj.Base_protected_num = 34, // CTE
}
