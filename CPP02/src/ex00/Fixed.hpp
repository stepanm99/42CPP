#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
private:
	int					value;
	static const int	fraction = 8;
public:
	Fixed();
	Fixed(Fixed& original);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	int		getRawBits(void);
	void	setRawBits(int const raw);
};

#endif