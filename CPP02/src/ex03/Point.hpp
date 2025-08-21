#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(Fixed const x, Fixed const y);
	Point(Point &original);
	Fixed &operator=(Fixed const &original);
	~Point();
};

#endif