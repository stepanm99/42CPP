#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(void)
{
	std::cout << "---Tests on the stack---" << std::endl;
	Cat			cat;
	Animal		copymal(cat);
	Dog			dog;
	WrongCat	wc;

	std::cout << "Cat type: " << cat.getType() << std::endl;
	std::cout << "Dog type: " << dog.getType() << std::endl;
	std::cout << "Wrong cat type: " << wc.getType() << std::endl;
	std::cout << "copymal type: " << copymal.getType() << std::endl;
	std::cout << "copymal sound: " << std::endl;
	copymal.makeSound();

	copymal = dog;
	std::cout << "copymal type: " << copymal.getType() << std::endl;
	std::cout << "copymal sound: " << std::endl;
	copymal.makeSound();

	std::cout << "Cat sound: " << std::endl;
	cat.makeSound();
	std::cout << "Dog sound: " << std::endl;
	dog.makeSound();
	std::cout << "Wrong cat sound: " << std::endl;
	wc.makeSound();

	std::cout << "---End of tests on the stack---\n" << std::endl;

	std::cout << "---Tests on the heap---" << std::endl;
	Animal* nanimal = new Animal();
	Animal* ncat = new Cat();
	Animal* ndog = new Dog();
	Animal* ncopymal = new Animal(*ndog);
	WrongAnimal* nwanimal = new WrongAnimal();
	WrongAnimal* nwcat = new WrongCat();

	std::cout << "ncopymal type: " << ncopymal->getType() << std::endl;
	std::cout << "ncopymal sound: " << std::endl;
	ncopymal->makeSound();

	*ncopymal = *ncat;	//dereferencing pointers so operator= is used

	std::cout << "ncopymal type: " << ncopymal->getType() << std::endl;
	std::cout << "ncopymal sound: " << std::endl;
	ncopymal->makeSound();

	*ncopymal = *ndog;

	std::cout << "ncopymal type: " << ncopymal->getType() << std::endl;
	std::cout << "ncopymal sound: " << std::endl;
	ncopymal->makeSound();

	std::cout << "Animal type: " << nanimal->getType() << std::endl;
	std::cout << "Animal sound: " << std::endl;
	nanimal->makeSound();

	std::cout << "Cat type: " << ncat->getType() << std::endl;
	std::cout << "Cat sound: " << std::endl;
	ncat->makeSound();

	std::cout << "Dog type: " << ndog->getType() << std::endl;
	std::cout << "Dog sound: " << std::endl;
	ndog->makeSound();
	
	delete nanimal;
	delete ncat;
	delete ndog;
	delete nwanimal;
	delete nwcat;
	delete ncopymal;
	std::cout << "---End of tests on the heap---" << std::endl;

	return (0);
}
