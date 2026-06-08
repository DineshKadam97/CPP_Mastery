#ifndef _PARALLELOGRAM_H
#define _PARALLELOGRAM_H

#include "quadrilateral.hpp"

class Paralleleogram : public Quadrilateral
{
    typedef double side_t, perimeter_t;
    private:
        side_t s1, s2;

    public:
        Paralleleogram(side_t _s1, side_t _s2);

        // here perimeter is an overrriden function
        // and what kind of overriden function?? replacor
        // it has replaced the perimeter present in Quadrilateral
        // becuase perimeter of the paralelogram can be calculated in a simple manner
        // and thats the reason, parallelogram has given it's definition
        // when we call the perimeter on Parallelogram object, then this perimeter() will be called

        // But, if we place a Parallelogram object on the Quadrilateral pointer
        // (Quadrilateral* Q = new Parallelogram()),
        // then to invoke this function, we need the virtual keyword to be mentioned 
        // before the declaration of the perimeter() in Quadrilateral class.

        // It is allowed by the C++ to place a derived class object's address on
        // It's base class's pointer, becuase when Derived class object 
        // calls the Base class method(e.g. area()). Internally, the address of 
        // the derived class will be the first parameter of that method
        // now we know the first parameter of the method of a class is 
        // "this" pointer, so what is happening is "this" pointer of the base class
        // is pointing to the object of derived class and this behaviour is valid and allowed
        // becuase if that was not the case, then we would have not been able to take
        // the advantage of using the function from the Base class using the derived class object
        // And the whole point of the inheritance would have been a void!

        perimeter_t perimeter();
};

#endif /* _PARALLELOGRAM_H */