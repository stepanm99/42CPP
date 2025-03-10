#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog is constructed" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog is decomposed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << ": woofs" << std::endl;
}
