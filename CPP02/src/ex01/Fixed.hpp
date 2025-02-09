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
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;
	void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, Fixed const &number);

#endif
