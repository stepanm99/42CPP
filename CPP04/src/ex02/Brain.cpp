#include"Brain.hpp"
#include "AAnimal.hpp"
#include<iostream>

Brain::Brain()
{
	if (PRINT)
		std::cout << "Brain composed" << std::endl;
}

Brain::Brain(Brain const &original)
{
	int	i = 0;

	while (i < 100)
	{
		this->ideas[i] = original.ideas[i];
		i++;
	}
	if (PRINT)
		std::cout << "Brain copy constructor used!\nthis->ideas address: " << this->ideas << "\noriginal.ideas address: " << std::endl;
}

Brain &Brain::operator=(Brain const &original)
{
	if (PRINT)
		std::cout << "Brain copy assignemt used!\nthis->ideas address: " << this->ideas << "\noriginal.ideas address: " << original.ideas << std::endl;
	if (this != &original)
	{
		int	i = 0;
		while (i < 100)
		{
			this->ideas[i] = original.ideas[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	if (PRINT)
		std::cout << "Brain decomposed" << std::endl;
}

void Brain::setIdea(int n, const std::string new_idea)
{
	if (n < BRAIN_CAPACITY && n >= 0)
		this->ideas[n] = new_idea;
}

const std::string Brain::getIdea(int n)
{
	if (n < BRAIN_CAPACITY && n >= 0)
	{
		std::cout << " ideas address: " << this->ideas << " ";
		return (this->ideas[n]);
	}
	return ("Outofrangeous idea...\n");
}
