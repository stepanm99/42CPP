#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed{
private:
	int					value;
	static const int	fraction = 8;
public:
	Fixed();
	Fixed(Fixed& original);
	//copy assingnment overload
	~Fixed();
	int		getRawBits(void);
	void	setRawBits(int const raw);
};

#endif