#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Cat cat;
	Dog dog;

	std::cout << "Cat type: " << cat.getType() << std::endl;
	std::cout << "Dog type: " << dog.getType() << std::endl;

	std::cout << "Cat sound: " << std::endl;
	cat.makeSound();
	std::cout << "Dog sound: " << std::endl;
	dog.makeSound();
	return (0);
}