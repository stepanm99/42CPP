#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	// AAnimal *aanimal = new AAnimal(); //throws error cause it's abstract class
	Cat *gatito = new Cat();

	std::cout << "Cat type: " << gatito->getType() << std::endl;

	delete gatito;
}
