#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog is constructed" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &original)
{
	this->type = original.type;
}

Dog &Dog::operator=(Dog const &original)
{
	this->type = original.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog is decomposed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << ": woofs" << std::endl;
}
