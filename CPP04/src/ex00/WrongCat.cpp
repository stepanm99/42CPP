#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "Wrong cat constructed" << std::endl;
	this->type = "wrong cat";
}

WrongCat::WrongCat(WrongCat const &original)
{
	this->type = original.type;
}

WrongCat &WrongCat::operator=(WrongCat const &original)
{
	this->type = original.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat decomposed" << std::endl;
}
