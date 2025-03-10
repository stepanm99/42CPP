#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
private:

protected:
	std::string type;

public:
	Animal();
	~Animal();
	void makeSound();
};

#endif