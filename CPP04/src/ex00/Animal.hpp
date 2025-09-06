#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(Animal const &original);
	Animal &operator=(Animal const &original);
	virtual ~Animal();
	virtual void makeSound(void) const;
	std::string getType() const;
};

#endif