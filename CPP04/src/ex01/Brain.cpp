#include"Brain.hpp"
#include<iostream>

Brain::Brain()
{
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
	std::cout << "Brain copy constructor used!" << std::endl;
}

Brain &Brain::operator=(Brain const &original)
{
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
	std::cout << "Brain decomposed" << std::endl;
}
