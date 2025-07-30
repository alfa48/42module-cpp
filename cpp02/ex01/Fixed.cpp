#include "Fixed.hpp"

const int Fixed::fractBitsValue = 8;

Fixed::Fixed() : fpValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
    std::cout << "Fixed Int Constructor called" << std::endl;
    this->fpValue = value << this->fractBitsValue;
}

Fixed::Fixed(float const value)
{
    std::cout << "Fixed Float Constructor called" << std::endl;
    this->fpValue = roundf(value * (1 << this->fractBitsValue));
}

Fixed::Fixed(const Fixed &src)
{
    std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

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

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
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

float Fixed::toFloat(void) const
{
    return ((float)this->fpValue / (float)(1 << this->fractBitsValue));
}

int Fixed::toInt(void) const
{
    return (this->fpValue >> this->fractBitsValue);
}
