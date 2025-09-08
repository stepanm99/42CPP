#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	if (PRINT)
		std::cout << "Dog is constructed" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &original)
{
	if (PRINT)
		std::cout << "Dog copy constructor used!" << std::endl;
	this->type = original.type;
}

Dog &Dog::operator=(Dog const &original)
{
	if (this != &original)
	{
		if (PRINT)
			std::cout << "Dog copy assignment used!" << std::endl;
		this->type = original.type;
		*this->brain = *original.brain;
	}
	return (*this);
}

Dog::~Dog()
{
	if (PRINT)
		std::cout << "Dog is decomposed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << ": woofs" << std::endl;
}

void	Dog::setIdea(int n, const std::string new_idea)
{
	this->brain->setIdea(n, new_idea);
}

const std::string Dog::getIdea(int n)
{
	return (this->brain->getIdea(n));
}

