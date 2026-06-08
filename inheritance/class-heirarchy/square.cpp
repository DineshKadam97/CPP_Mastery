#include "square.hpp"

Square::Square(side_t _s):Rhombus(_s)
{
    if(_s <= 0)
    {
        throw std::domain_error("Invalid Side of Square");
    }
    s = _s;
}

Square::diagonal_t Square::diagonal()
{
    return sqrt(2)*s;
}
