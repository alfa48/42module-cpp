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

    bool operator>(Fixed fixed) const;
    bool operator<(Fixed fixed) const;
    bool operator>=(Fixed fixed) const;
    bool operator<=(Fixed fixed) const;
    bool operator==(Fixed fixed) const;
    bool operator!=(Fixed fixed) const;

    float operator+(Fixed fixed) const;
    float operator-(Fixed fixed) const;
    float operator*(Fixed fixed) const;
    float operator/(Fixed fixed) const;

    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed &min(Fixed &fpFirst, Fixed &fpSecond);
    static const Fixed &min(Fixed const &fpFirst, Fixed const &fpSecond);
    static Fixed &max(Fixed &fpFirst, Fixed &second);
    static const Fixed &max(Fixed const &fpFirst, const Fixed &fpSecond);
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
