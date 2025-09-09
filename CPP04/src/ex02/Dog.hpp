#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog: public AAnimal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog const &original);
	Dog &operator=(Dog const &original);
	~Dog();
	void makeSound(void) const;
	std::string getType() const;
	void	setIdea(int n, const std::string new_idea);
	const std::string getIdea(int n);
};

#endif
