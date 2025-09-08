#include"Brain.hpp"
#include "Animal.hpp"
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
		std::cout << "Brain copy constructor used!" << std::endl;
}

Brain &Brain::operator=(Brain const &original)
{
	if (PRINT)
		std::cout << "Brain copy assignemt used!" << std::endl;
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
		return (this->ideas[n]);
	return ("Outofrangeous idea...\n");
}
