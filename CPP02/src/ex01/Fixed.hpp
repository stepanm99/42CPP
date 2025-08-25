#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
private:
	int					value;
	static const int	fraction;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &original);
	Fixed(const int number);
	Fixed(const float number);
	Fixed &operator=(Fixed const &original);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &number);

#endif
