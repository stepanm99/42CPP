#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

AAnimal::AAnimal()
{
	this->type = "Generic Aanimal";
	this->brain = new Brain();
	if (PRINT)
		std::cout << "AAnimal is constructed" << std::endl;
}

AAnimal::AAnimal(AAnimal const &original)
{
	if (PRINT)
		std::cout << "AAnimal copy constructor used!" << std::endl;
	this->type = original.type;
}

AAnimal &AAnimal::operator=(AAnimal const &original)
{
	if (this != &original)
	{
		if (PRINT)
			std::cout << "AAnimal copy assignment used!" << std::endl;
		this->type = original.type;
		*this->brain = *original.brain;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	delete this->brain;
	if (PRINT)
		std::cout << "AAnimal is decomposed" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << this->type << ": makes generic animal sound" << std::endl;
}

// std::string AAnimal::getType() const
// {
// 	return this->type;
// }

void	AAnimal::setIdea(int n, const std::string new_idea)
{
	this->brain->setIdea(n, new_idea);
}

const std::string AAnimal::getIdea(int n)
{
	return (this->brain->getIdea(n));
}
