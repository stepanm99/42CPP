#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(Dog const &original);
	Dog &operator=(Dog const &original);
	~Dog();
	void makeSound(void) const;
	void	setIdea(int n, const std::string new_idea);
	const std::string getIdea(int n);
};

#endif
