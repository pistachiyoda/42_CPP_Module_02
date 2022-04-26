#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int raw)
{
    std::cout << "Int constructor called" << std::endl;
    value = raw << fractionalBits;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = fixed.getRawBits();
    return *this;
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(raw * (1 << fractionalBits));
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

float Fixed::toFloat() const
{
    return (float)value / (float)(1 << fractionalBits);
}

int Fixed::toInt() const
{
    return value >> fractionalBits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}
