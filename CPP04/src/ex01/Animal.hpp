#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

# ifndef PRINT
#  define PRINT 0
# endif

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
	void	setIdea(int n, const std::string new_idea);
	const std::string getIdea(int n);
};

#endif
