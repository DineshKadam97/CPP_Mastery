#include "rhombus.hpp"

Rhombus::Rhombus(side_t _s):Quadrilateral(_s, _s, _s, _s)
{
    if(_s <= 0)
    {
        throw std::domain_error("Invalid side of Rhombus");
    }
    s = _s;
}

Rhombus::perimeter_t Rhombus::perimeter()
{
    std::cout << "In Rhombus perimeter" << std::endl;
    return 4 * s;
}

Rhombus::area_t Rhombus::area()
{
    std::cout << "In Rhombus area" << std::endl;
    return s * s;
}
