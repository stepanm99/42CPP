#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Wrong cat constructed" << std::endl;
	this->type = "wrong cat";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat decomposed" << std::endl;
}

// void WrongCat::makeSound()
// {
// 	std::cout << "Wrong cat meows wrongly" << std::endl;
// }