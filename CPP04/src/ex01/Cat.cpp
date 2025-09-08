#include "Cat.hpp"
#include "Animal.hpp"
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
	int	i = 0;
	while (i < BRAIN_CAPACITY)
	{
		this->brain->setIdea(i, original.brain->getIdea(i));
		i++;
	}
	if (PRINT)
		std::cout << "Cat copy constructor used!" << std::endl;
	this->type = original.type;
}

Cat &Cat::operator=(Cat const &original)
{
	if (this != &original)
	{
		int	i = 0;
		while (i < BRAIN_CAPACITY)
		{
			this->brain->setIdea(i, original.brain->getIdea(i));
			i++;
		}
		if (PRINT)
			std::cout << "Cat copy assignment used!" << std::endl;
		this->type = original.type;
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

void	Cat::setIdea(int n, const std::string new_idea)
{
	this->brain->setIdea(n, new_idea);
}

const std::string Cat::getIdea(int n)
{
	return (this->brain->getIdea(n));
}
