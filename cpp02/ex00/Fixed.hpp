#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fpValue;
    static const int fractBitsValue;

public:
    Fixed();
    Fixed(const Fixed &src);

    Fixed &operator=(const Fixed &src);

    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};
#endif