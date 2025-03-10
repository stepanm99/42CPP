#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Generic animal";
	std::cout << "Animal is constructed" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal se decomposed" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << this->type << ": makes sound" << std::endl;
}

std::string Animal::getType()
{
	return this->type;
}
