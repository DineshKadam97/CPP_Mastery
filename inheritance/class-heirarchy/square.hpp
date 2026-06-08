#ifndef _SQUARE_H
#define _SQUARE_H

#include "rhombus.hpp"

class Square : public Rhombus
{
    typedef double side_t, diagonal_t;
    private:
        side_t s;

    public:
        Square(side_t _s);
        diagonal_t diagonal();
};

#endif /* _SQUARE_H*/
