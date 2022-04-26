#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int raw);
    Fixed(const float raw);
    Fixed &operator=(const Fixed &fixed);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;

private:
    int value;
    const static int fractionalBits;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif
