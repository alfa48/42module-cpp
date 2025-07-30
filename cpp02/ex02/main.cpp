#include "Fixed.hpp"

#include <string>
#include <iostream>
#include <cmath>

#include "Fixed.hpp"

int main()
{
    {
        Fixed a;
        Fixed const b(Fixed(5.05f) * Fixed(2));
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max(a, b) << std::endl;
    }
    std::cout << "=== Teste 1: Operadores de incremento ===" << std::endl;
    {
        Fixed a;
        std::cout << "a:        " << a << std::endl;
        std::cout << "++a:      " << ++a << std::endl;
        std::cout << "a:        " << a << std::endl;
        std::cout << "a++:      " << a++ << std::endl;
        std::cout << "a:        " << a << std::endl;
    }

    std::cout << "\n=== Teste 2: Operadores aritméticos ===" << std::endl;
    {
        Fixed const b(Fixed(5.05f) * Fixed(2));
        std::cout << "b:        " << b << std::endl;
        Fixed c = Fixed(10.5f) + Fixed(1.25f);
        std::cout << "c:        " << c << std::endl;
        Fixed d = Fixed(7.5f) - Fixed(3.25f);
        std::cout << "d:        " << d << std::endl;
        Fixed e = Fixed(10.0f) / Fixed(2.0f);
        std::cout << "e:        " << e << std::endl;
    }

    std::cout << "\n=== Teste 3: Operadores relacionais ===" << std::endl;
    {
        Fixed a(5.25f);
        Fixed b(10.0f);
        std::cout << "a < b:    " << (a < b) << std::endl;
        std::cout << "a > b:    " << (a > b) << std::endl;
        std::cout << "a <= b:   " << (a <= b) << std::endl;
        std::cout << "a >= b:   " << (a >= b) << std::endl;
        std::cout << "a == b:   " << (a == b) << std::endl;
        std::cout << "a != b:   " << (a != b) << std::endl;
    }

    std::cout << "\n=== Teste 4: Funções min e max ===" << std::endl;
    {
        Fixed a(2.75f);
        Fixed b(3.0f);
        std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
        std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
    }

    return 0;
}
