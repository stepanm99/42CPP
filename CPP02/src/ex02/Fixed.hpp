#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
private:
	int					value;
	static const int	fraction;
public:
	Fixed();
	Fixed(const Fixed &original);
	Fixed(const int number);
	Fixed(const float number);
	Fixed &operator=(Fixed const &original);
	~Fixed();

	//comparison operator overloads
	bool operator==(Fixed const &other) const;
	bool operator!=(Fixed const &other) const;
	bool operator>(Fixed const &other) const;
	bool operator<(Fixed const &other) const;
	bool operator>=(Fixed const &other) const;
	bool operator<=(Fixed const &other) const;

	//arithmetic operators overload
	Fixed operator+(Fixed const &other);
	Fixed operator-(Fixed const &other);
	Fixed operator*(Fixed const &other);
	Fixed operator/(Fixed const &other);
	Fixed operator++(int);	//post increment
	Fixed operator++();
	Fixed operator--(int);	//post decrement
	Fixed operator--();

	/**
	 * Public functions
	 */
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;
	void	setRawBits(int const raw);

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, Fixed const &number);


#endif
