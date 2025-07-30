#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fpValue;
    static const int fractBitsValue;

public:
    Fixed();
    Fixed(const Fixed &src);

    Fixed(const int value);
    Fixed(const float value);

    Fixed &operator=(const Fixed &src);

    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

    int toInt(void) const;
    float toFloat(void) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
