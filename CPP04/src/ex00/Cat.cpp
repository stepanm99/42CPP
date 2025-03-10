#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat is constructed" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat is decomposed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << ": meows" << std::endl;
}