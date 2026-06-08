#ifndef _QUADRILATERAL_H
#define _QUADRILATERAL_H

#include <iostream>

class Quadrilateral
{
    typedef double side_t, area_t, perimeter_t;
    private:
        side_t s1, s2, s3, s4;

    public:
        Quadrilateral(side_t _s1, side_t _s2, side_t _s3, side_t _s4);

        perimeter_t perimeter();

        area_t area();
};

#endif /* _QUADRILATERAL_H */