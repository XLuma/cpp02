//
// Created by Louis-gabriel Laplante on 2022-05-16.
//

#ifndef PISCINE_CP_FIXED_H
#define PISCINE_CP_FIXED_H

#include <iostream>
class Fixed {

private:
	int _primary; //Integer number before comma
	const static int _bits = 8; //8 bit storing after the comma
public:
	Fixed();
	Fixed(Fixed &fixed);
	Fixed & operator = (const Fixed &rhs);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif //PISCINE_CP_FIXED_H
