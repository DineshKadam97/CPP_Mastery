#include <iostream>

class Base
{
    public:
        int public_num;
    private:
        int private_num;
        int x;

    protected:
        int protected_num;

    public:
        Base(int _x):x(_x)
        {

        }

        virtual void fun_1()
        {
            std::cout << "Base::fun_1()" << std::endl;
        }

        void fun_2()
        {
            std::cout << "Base::fun_2()" << std::endl;
        }

        void gun()
        {
            std::cout << "Base::gun()" << std::endl;
        }
};

class Derived : public Base
{
    public:
        int derived_public_num;

    private:
        int private_num;
        int y;

    protected:
        int protected_num;

    public:
        Derived(int _y, int x = 0) : y(_y), Base(x)
        {

        }

        void fun_1()
        {
            std::cout << "Derived::fun_1()" << std::endl;
        }

        void fun_2()
        {
            std::cout << "Derived::fun_2()" << std::endl;
        }

        void hun()
        {
            std::cout << "Derived::hun()" << std::endl;
        }
};

void test_derived_object_on_derived_ptr(void);
void test_derived_object_on_base_ptr(void);

int main(void)
{
    test_derived_object_on_derived_ptr();
    test_derived_object_on_base_ptr();

    return 0;
}

void test_derived_object_on_derived_ptr(void)
{
    Derived* dObj = new Derived(234);
    dObj->fun_1();
    dObj->fun_2();
    dObj->gun();
    dObj->hun();

    dObj->Base::fun_1();
    dObj->Base::fun_2();

    std::cout << dObj->public_num << std::endl;
}

void test_derived_object_on_base_ptr(void)
{
    Base* bObj = new Derived(123);

    bObj->fun_1();
    bObj->fun_2();
    bObj->gun();

    dynamic_cast<Derived*>(bObj)->fun_1();
    dynamic_cast<Derived*>(bObj)->fun_2();
    dynamic_cast<Derived*>(bObj)->hun();

    std::cout << bObj->public_num << std::endl;
    std::cout << bObj->derived_public_num << std::endl;
}

/*
    interface inheritance is used for better client-server separation.
    COM builds binary encapsulation 
    Inside COM by Dale Rogerson 
    Grady Booch 4 chapters
    Mag Essential COM
*/
