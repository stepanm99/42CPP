#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(Cat const &original);
	Cat &operator=(Cat const &original);
	~Cat();
	void	makeSound(void) const;
	void	setIdea(int n, const std::string new_idea);
	const std::string getIdea(int n);
};

#endif
