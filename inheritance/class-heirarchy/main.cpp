#include <iostream>
#include "square.hpp"
#include "rectangle.hpp"

int main(void)
{
    std::cout << "------------------------------------------------------------------------" << std::endl;
    Paralleleogram P(6, 4);
    std::cout << "Perimeter of parallelogram is : " << P.perimeter() << std::endl;
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << "------------------------------------------------------------------------" << std::endl;
    Rectangle R(6, 7);
    std::cout << "Area of Rectangle is : " << R.area() << std::endl;
    std::cout << "Perimeter of Rectanle is : " << R.perimeter() << std::endl;
    std::cout << "Diagonal of Rectangle is : " << R.diagonal() << std::endl;
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << "------------------------------------------------------------------------" << std::endl;
    Rhombus Rh(10);
    std::cout << "hi" << std::endl;
    std::cout << "Area of Rhombus is : " << Rh.area() << std::endl;
    std::cout << "Perimeter of Rhombus is : " << Rh.perimeter() << std::endl;
    std::cout << "------------------------------------------------------------------------" << std::endl;

    std::cout << "------------------------------------------------------------------------" << std::endl;
    Square s(8);
    std::cout << "Area of square is : " << s.area() << std::endl;
    std::cout << "Perimeter of Square is : " << s.perimeter() << std::endl;
    std::cout << "Diagonal of square is : " << s.diagonal() << std::endl;
    std::cout << "------------------------------------------------------------------------" << std::endl;

    return 0;
}

