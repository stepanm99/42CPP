#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &original);
	WrongAnimal &operator=(WrongAnimal const &original);
	~WrongAnimal();
	void makeSound(void);
	std::string getType(void);
};

#endif