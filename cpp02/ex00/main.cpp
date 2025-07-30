#include "Fixed.hpp"

#include <iostream>
#include <iomanip>

int main(void)
{

    /*
    {

        float x = 0.1f + 0.2f;
        std::cout << std::fixed << std::setprecision(20);
        std::cout << "x       = " << x << std::endl;
        std::cout << "0.3f    = " << 0.3f << std::endl;
        std::cout << "x == 0.3 ? " << (x == 0.3) << std::endl;
    }
        */
    std::cout << std::endl;
    std::cout << std::endl;

    {
        Fixed a;
        Fixed b(a);
        Fixed c;
        c = b;
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;

    {
        Fixed a;
        a.setRawBits(89);
        Fixed b(a);
        Fixed c;
        c = b;
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
    }
    return (0);
}