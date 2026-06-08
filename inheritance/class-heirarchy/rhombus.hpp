#ifndef _RHOMBUS_H
#define _RHOMBUS_H

#include "quadrilateral.hpp"

class Rhombus : public Quadrilateral
{
    typedef double side_t, perimeter_t, area_t;
    private:
        side_t s;

    public:
        Rhombus(side_t _s);
        area_t area();
        perimeter_t perimeter();
};
#endif /* _RHOMBUS_H*/
