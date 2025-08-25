#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = original.getRawBits();
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (number << Fixed::fraction);
}


Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called " << std::endl;
	this->value = (int)(number * (1 << Fixed::fraction));
}

Fixed& Fixed::operator=(Fixed const &original)
{
	std::cout << "Coppy assignment operator called" << std::endl;
	this->value = original.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &number)
{
	// std::cout << "<< operator overload called" << std::endl;
	out << number.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = raw << Fixed::fraction;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::fraction));
}

int Fixed::toInt(void) const
{
	return ((int)(this->value >> Fixed::fraction));
}

const int Fixed::fraction = 8;
