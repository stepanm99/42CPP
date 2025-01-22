#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed &operator=(const Fixed &other)
{
	std::cout << "Coppy assignment operator called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{

}