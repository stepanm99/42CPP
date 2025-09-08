#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat()
{
	if (PRINT)
		std::cout << "Cat is constructed" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &original)
{
	this->brain = new Brain();
	*this->brain = *original.brain;
	if (PRINT)
		std::cout << "Cat copy constructor used!" << std::endl;
	this->type = original.type;
}

Cat &Cat::operator=(Cat const &original)
{
	if (this != &original)
	{
		if (PRINT)
			std::cout << "Cat copy assignment used!" << std::endl;
		this->type = original.type;
		*this->brain = *original.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	if (PRINT)
		std::cout << "Cat is decomposed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << ": meows" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}

void	Cat::setIdea(int n, const std::string new_idea)
{
	this->brain->setIdea(n, new_idea);
}

const std::string Cat::getIdea(int n)
{
	std::cout << "Get idea brain pointer check: " << this->brain << std::endl;
	return (this->brain->getIdea(n));
}
