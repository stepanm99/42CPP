#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;		//default constructor called
	Fixed b(a);		//copy constructor called
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	a.setRawBits(8);
	std::cout << a.getRawBits() << std::endl;
	return (0);
}
