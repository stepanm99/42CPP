#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &original)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->value = original.getRawBits();
}

Fixed::Fixed(const int number)
{
	// std::cout << "Int constructor called" << std::endl;
	this->value = (number << Fixed::fraction);
}


Fixed::Fixed(const float number)
{
	// std::cout << "Float constructor called " << this->fraction << std::endl;
	this->value = number * (float)(1 << Fixed::fraction);
}

Fixed& Fixed::operator=(Fixed const &original)
{
	// std::cout << "Coppy assignment operator called" << std::endl;
	this->value = original.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const &other)
{
	Fixed result(*this);

	result.value = (this->value + other.value);
	return (result);
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed result(*this);

	result.value = (this->value - other.value);
	return (result);
}

Fixed Fixed::operator*(Fixed const &other)
{
	Fixed	result(*this);
	long	this_tmp;
	long	other_tmp;

	this_tmp = (long)this->value;
	other_tmp = (long)other.value;
	result.value = ((this_tmp * other_tmp) / (1 << Fixed::fraction));
	return result;
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed	result(*this);
	long	this_tmp;
	long	other_tmp;

	this_tmp = (long)this->value;
	other_tmp = (long)other.value;
	result.value = ((this_tmp * (1 << Fixed::fraction)) / other_tmp);
	return result;
}

/**
 * Postfix increment
 */
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	this->value++;
	return temp;
}

/**
 * Prefix increment
 */
Fixed Fixed::operator++()
{
	this->value++;
	return *this;
}

/**
 * Postfix decrement
 */
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	this->value--;
	return temp;
}

/**
 * Prefix decrement
 */
Fixed Fixed::operator--()
{
	this->value--;
	return *this;
}

bool Fixed::operator==(Fixed const &other) const
{
	return(this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return(this->getRawBits() != other.getRawBits());
}

bool Fixed::operator>(Fixed const &other) const
{
	return(this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const
{
	return(this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return(this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return(this->getRawBits() <= other.getRawBits());
}

std::ostream &operator<<(std::ostream &out, Fixed const &number)
{
	// std::cout << "<< operator overload called" << std::endl;
	out << number.toFloat();
	return (out);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return a;
	else
		return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return a;
	else
		return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a >= b)
		return a;
	else
		return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a >=b)
		return a;
	else
		return b;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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
