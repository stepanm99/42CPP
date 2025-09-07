#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat is constructed" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &original)
{
	std::cout << "Cat copy constructor used!" << std::endl;
	this->type = original.type;
}

Cat &Cat::operator=(Cat const &original)
{
	if (this != &original)
	{
		std::cout << "Cat copy assignment used!" << std::endl;
		this->type = original.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat is decomposed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << ": meows" << std::endl;
}
