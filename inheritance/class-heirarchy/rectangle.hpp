#ifndef _RECTANGLE_H
#define _RECTANGLE_H

#include "parallelogram.hpp"

class Rectangle : public Paralleleogram
{
    typedef double side_t, diagonal_t;
    private:
        side_t s1, s2;

    public:
        Rectangle(side_t _s1, side_t _s2);

        diagonal_t diagonal();
};

#endif /* _RECTANGLE_H*/