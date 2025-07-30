#include "Fixed.hpp"
const int Fixed::fractBitsValue = 8;

Fixed::Fixed() : fpValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Fixed Copy Constructor called" << std::endl;
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Fixed Assignation operator called" << std::endl;
    if (this != &src)
    {
        this->fpValue = src.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fpValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fpValue = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}