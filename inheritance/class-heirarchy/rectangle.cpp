#include"Rectangle.hpp"

Rectangle::Rectangle(side_t _s1, side_t _s2):Paralleleogram(_s1, _s2)
{
    if(_s1 <= 0 || _s2 <= 0)
    {
        throw std::domain_error("Invalid sides of rectangle");
    }
    s1 = _s1, s2 = _s2;
}

Rectangle::diagonal_t Rectangle::diagonal()
{
    return sqrt((s1*s1) + (s2*s2));
}
