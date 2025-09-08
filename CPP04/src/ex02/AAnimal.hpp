#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

# ifndef PRINT
#  define PRINT 1
# endif

class AAnimal
{
protected:
	std::string	type;
	Brain		*brain;

public:
	AAnimal();
	AAnimal(AAnimal const &original);
	AAnimal &operator=(AAnimal const &original);
	virtual ~AAnimal();
	virtual void makeSound(void) const;

	/*At least one purely virtual function makes any class abstract
	as because of purely virtual function the class can't be
	instantiated without overriding it, which could be done practically
	only in derived classes*/
	virtual std::string getType() const = 0;

	virtual void	setIdea(int n, const std::string new_idea);
	virtual const std::string getIdea(int n);
};

#endif
