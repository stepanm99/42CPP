#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed		a(1);
	//Fixed const b(Fixed(0.05f) * Fixed(2));
	Fixed	b(2);

	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max(a, b): " << max(a, b) << std::endl;
	std::cout << "min(a, b): " << min(a, b) << std::endl;
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;
	return (0);
}
