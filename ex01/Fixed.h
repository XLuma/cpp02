//
// Created by Louis-gabriel Laplante on 2022-05-16.
//

#ifndef PISCINE_CP_FIXED_H
#define PISCINE_CP_FIXED_H

#include <cmath>
#include <iostream>

class Fixed {

private:
	int _primary; //Integer number before comma
	const static int _bits = 8; //8 bit storing after the comma
public:
	Fixed(); //default
	Fixed(const int num); //int constructor
	Fixed(const float num); //float constructor
	Fixed(const Fixed &fixed); //copy
	Fixed & operator = (const Fixed &rhs); //assignation
	~Fixed(); //destructor

	int getRawBits(void) const; //get
	void setRawBits(int const raw); //set

	float toFloat(void) const;
	int toInt(void) const;
};
std::ostream & operator << (std::ostream &out, const Fixed &fixed); //out overload, has to be outside cause we cant use friend

#endif //PISCINE_CP_FIXED_H
