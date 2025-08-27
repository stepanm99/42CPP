#include <iostream>
#include "Fixed.hpp"
#include <bitset>



int main(void)
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	// return 0;
	//my test main
	Fixed		a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::bitset<32> bits;

	bits = a.getRawBits();
	std::cout << "a: " << a << std::endl;
	std::cout << "a in binary: " << bits << std::endl;

	std::cout << "++a: " << ++a << std::endl;
	bits = a.getRawBits();
	std::cout << "a in binary: " << bits << std::endl;

	std::cout << "a: " << a << std::endl;
	bits = a.getRawBits();
	std::cout << "a in binary: " << bits << std::endl;

	std::cout << "a++: " << a++ << std::endl;
	bits = a.getRawBits();
	std::cout << "a in binary: " << bits << std::endl;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;
	return (0);
}
