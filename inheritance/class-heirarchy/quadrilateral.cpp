#include "quadrilateral.hpp"

Quadrilateral :: Quadrilateral(side_t _s1, side_t _s2, side_t _s3, side_t _s4)
{
    if(_s1 <= 0 || _s2 <=0 || _s3 <= 0 || _s4 <= 0 ||
     ((_s1 + _s2 + s3) <= s4) || ((_s1 + _s3 + _s4) <= _s2) || ((_s1 + _s2 + _s4) <= _s3) || ((_s2 + _s3 + _s4) <= _s1))
    {
        throw std::domain_error("Invalid sides for quadrilateral");
    }
    s1 = _s1, s2 = _s2, s3 = _s3, s4 = _s4;
}

Quadrilateral::perimeter_t Quadrilateral::perimeter()
{
    std::cout << "In Quadrilateral perimeter()" << std::endl;
    return s1 + s2 + s3 + s4;
}

Quadrilateral::area_t Quadrilateral::area()
{
    double s = perimeter()/2;
    std::cout << "In Quadrilateral area()" << std::endl;
    return sqrt((s-s1) * (s-s2) * (s-s3) * (s-s4));
}
