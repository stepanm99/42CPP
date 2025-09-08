#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Animal::Animal()
{
	this->type = "Generic animal";
	this->brain = new Brain();
	if (PRINT)
		std::cout << "Animal is constructed" << std::endl;
}

Animal::Animal(Animal const &original)
{
	if (PRINT)
		std::cout << "Animal copy constructor used!" << std::endl;
	this->type = original.type;
}

Animal &Animal::operator=(Animal const &original)
{
	if (this != &original)
	{
		if (PRINT)
			std::cout << "Animal copy assignment used!" << std::endl;
		this->type = original.type;
	}
	return (*this);
}

Animal::~Animal()
{
	delete this->brain;
	if (PRINT)
		std::cout << "Animal is decomposed" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << this->type << ": makes generic animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void	Animal::setIdea(int n, const std::string new_idea)
{
	this->brain->setIdea(n, new_idea);
}

const std::string Animal::getIdea(int n)
{
	return (this->brain->getIdea(n));
}
