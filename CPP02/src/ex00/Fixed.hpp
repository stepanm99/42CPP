#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

#define PRINT 1;

class Fixed{
private:
	int					value;
	static const int	fraction = 8;
public:
	Fixed();								//constructor
	~Fixed();								//destructor
	Fixed(Fixed const &original);			//copy constructor
	Fixed &operator=(Fixed const &original);//copy assignment
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
