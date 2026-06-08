#include <iostream>

class Base
{
    public:
        void fun_1()
        {
            std::cout << "Inside Base::fun_1()" << std::endl;
        }

        virtual void fun_2()
        {
            std::cout << "Inside Base::fun_2" <<std::endl;
        }

        void gun()
        {
            std::cout << "Inside Base::gun()" << std::endl;
        }
};


class Derived : public Base
{
    public:
        void fun_1()
        {
            std::cout << "Inside Derived::fun_1()" << std::endl;
        }

        void fun_2()
        {
            std::cout << "Inside Derived::fun_2" <<std::endl;
        }

        void hun()
        {
            std::cout << "Inside Derived::hun()" << std::endl;
        }
};

void test_base_object_on_base_pointer(); // will lead to UB, if we try to access derived objects
void test_derived_object_on_base_pointer();
void test_derived_object_on_derived_pointer();

int main()
{
    test_base_object_on_base_pointer();
    test_derived_object_on_base_pointer();
    test_derived_object_on_derived_pointer();

    return 0;
}

void test_base_object_on_base_pointer()
{
    Base* bobj = new Base();

    bobj->fun_1(); // Base::fun_1();
    bobj->fun_2(); // Base::fun_2()
    bobj->gun(); // Base::gun();

    // we can call Derived's fun_1(), hun() using dynamic cast but calling fun_2() is UB
    // downcasting is not allowed, this will lead to UB, never do itz!!
    // reason : when we do dynamic_cast, compiler do not know the type of object Base* bobj is pointing to
    // at run time, it will look into the vtable of the object pointed by th bobj,
    // here it is Base's object's vtable and vtable contains the type info of the object which includes name of the object and
    // its inheritance heirarchy and the then the functions()
    // so, when compiler looks at the vtable of bobj, then it will find the name of the class as Base
    // and there will be no mention of the derived class, that's why
    // dynamic_cast<Derived*>(bobj) will return nullptr.. 
    // and accessing or calling functions on nullptr is UB
    // for fun_1() and hun() since they are not virtual functions, the call may work
    // but for fun_2() since its a virtual function, this-> dereference has to be done and that will lead to seg-fault
    // dynamic_cast<Derived*>(bobj)->fun_1();
    // reinterpret_cast<Derived*>(bobj)->fun_2();
    // dynamic_cast<Derived*>(bobj)->hun();
}

void test_derived_object_on_base_pointer()
{
    Base* bobj = new Derived();

    bobj->fun_1();  // Base::fun_1()
    bobj->fun_2(); // Derived::fun_2()
    bobj->gun();   // Base::gun()

    ((Derived*)bobj)->fun_1(); // Derived::fun_1()
    bobj->Base::fun_2();  // Base::fun_2()
    ((Derived*)bobj)->hun();   // Derived::hun()
}

void test_derived_object_on_derived_pointer()
{
    Derived* dobj = new Derived();

    dobj->fun_1(); // Derived::fun_1()
    dobj->fun_2();  //Derived::fun_2();
    dobj->hun(); // Derived::hun()

    dobj->Base::fun_1();  // Base::fun_1()
    dobj->Base::fun_2();   // Base::fun_2()
    dobj->Base::gun(); // Base::gun();
}