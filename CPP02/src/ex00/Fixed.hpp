#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
private:
	int					value;
	static const int	fraction;
public:
	Fixed();
	Fixed(Fixed const &original);
	Fixed &operator=(Fixed const &original);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
