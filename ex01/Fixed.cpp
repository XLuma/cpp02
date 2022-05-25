//
// Created by Louis-gabriel Laplante on 2022-05-16.
//

#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_primary = 0;
}

Fixed::Fixed(const int num) : _primary(){
	std::cout << "Integer constructor called" << std::endl;
	_primary = (int)(roundf((float)num * (1 << _bits)));
}

Fixed::Fixed(const float num) {
	std::cout << "Floating point constructor called" << std::endl;
	_primary = (int)(roundf(num * (1 << _bits)));
}

Fixed::Fixed(const Fixed &fixed)
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

std::ostream & operator << (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
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

float Fixed::toFloat() const {
	return ((float)this->_primary / (float)(1 << this->_bits));
}

int Fixed::toInt() const {
	return (int)(this->_primary / (float)(1 << this->_bits));
}