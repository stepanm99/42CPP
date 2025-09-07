#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
	Brain		*brain;

public:
	Animal();
	Animal(Animal const &original);
	Animal &operator=(Animal const &original);
	virtual ~Animal();
	virtual void makeSound(void) const;
	std::string getType() const;
};

#endif
