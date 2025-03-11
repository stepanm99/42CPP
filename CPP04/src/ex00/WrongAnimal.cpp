#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong animal constructed" << std::endl;
	this->type = "Generically wrongally anomalic animal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal decomposed" << std::endl;
}

void WrongAnimal::makeSound(void)
{
	std::cout << this->type << ": makes a generic wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType(void)
{
	return this->type;
}