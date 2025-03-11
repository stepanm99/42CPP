#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Cat cat;
	Dog dog;
	WrongCat wc;

	std::cout << "Cat type: " << cat.getType() << std::endl;
	std::cout << "Dog type: " << dog.getType() << std::endl;
	std::cout << "Wrong cat type" << wc.getType() << std::endl;

	std::cout << "Cat sound: " << std::endl;
	cat.makeSound();
	std::cout << "Dog sound: " << std::endl;
	dog.makeSound();
	std::cout << "Wrong cat sound: " << std::endl;
	wc.makeSound();
	return (0);
}