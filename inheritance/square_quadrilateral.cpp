#include <iostream>
#include <cmath>

class Quadrilateral
{
    typedef double side_t, area_t, perimeter_t;
    private:
        side_t s1, s2, s3, s4;

    public:
        Quadrilateral(side_t _s1, side_t _s2, side_t _s3, side_t _s4)
        {
            if(_s1 <= 0.0 || _s1 <= 0.0 || _s3 <= 0.0 || _s4 <= 0.0 ||
               ((_s1 + _s2 + s3) <= s4) || ((_s1 + _s2 + _s4) <= _s3) || ((_s1 + _s3 + _s4) <= _s2) || ((_s2 + _s3 + _s4) <= _s1))
               {
                    throw std::domain_error("One or more incorrect sides");
               }

            s1 = _s1, s2 = _s2, s3 = _s3, s4 = _s4;
        }

        perimeter_t quad_perimeter()
        {
            perimeter_t perimeter = s1 + s2 + s3 + s4;
            return perimeter;
        }

        area_t quad_area()
        {
            double s = quad_perimeter / 2;

            return sqrt(s*(s-s1)*(s-s2)*(s-s3)*(s-s4));
        }
};

class Square
{
    typedef double side_t, area_t, perimeter_t;
    private:
        side_t s1, s2, s3, s4;

    public:
        Square(side_t s)
        {
            if(s <= 0)
            {
                throw std::domain_error("Invalid side for square");
            }

            s1 = s, s2 = s, s3 = s, s4 = s;
        }

};

int main()
{
    return 0;
}