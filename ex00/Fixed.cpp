//
// Created by Louis-gabriel Laplante on 2022-05-16.
//

#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_primary = 0;
}

Fixed::Fixed(Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_primary = fixed.getRawBits();
}

Fixed & Fixed::operator = (const Fixed &rhs) {
	if (this == &rhs)
		return *this;
	_primary = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_primary;
}

void Fixed::setRawBits(int const raw)
{
	this->_primary = raw;
}
