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
	~Fixed(); //destructor

	Fixed & operator = (const Fixed &rhs); //assignation
	bool operator > (const Fixed &rhs) const;//bigger than
	bool operator < (const Fixed &rhs) const;//less than
	bool operator >= (const Fixed &rhs)const; //bigger or equal than
	bool operator <= (const Fixed &rhs)const; //equal or less than
	bool operator == (const Fixed &rhs)const; //equal as
	bool operator != (const Fixed &rhs)const; //not equal as
	Fixed operator + (const Fixed &rhs)const; //plus
	Fixed operator - (const Fixed &rhs)const; //minus
	Fixed operator * (const Fixed &rhs)const; //multiply
	Fixed operator / (const Fixed &rhs)const; //divide
	Fixed &operator ++ (void); //preincrement
	Fixed &operator -- (void); //predecrement
	Fixed operator ++ (int);
	Fixed operator -- (int);
	static Fixed &max(Fixed &lhs, Fixed &rhs);
	static const Fixed &max(const Fixed &lhs, const Fixed &rhs);
	static Fixed &min(Fixed &lhs, Fixed &rhs);
	static const Fixed &min(const Fixed &lhs, const Fixed &rhs); //ok that was way too long

	int getRawBits(void) const; //get
	void setRawBits(int const raw); //set

	float toFloat(void) const;
	int toInt(void) const;
};
std::ostream & operator << (std::ostream &out, const Fixed &fixed); //out overload, has to be outside cause we cant use friend

#endif //PISCINE_CP_FIXED_H
