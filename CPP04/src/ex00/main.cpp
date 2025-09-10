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

	std::cout << "\n\nCat type: " << cat.getType() << std::endl;
	std::cout << "\n\nDog type: " << dog.getType() << std::endl;
	std::cout << "\n\nWrong cat type: " << wc.getType() << std::endl;

	std::cout << "\n\ncopymal type: " << copymal.getType() << std::endl;
	std::cout << "copymal sound: " << std::endl;
	copymal.makeSound();

	copymal = dog;
	std::cout << "\n\ncopymal type: " << copymal.getType() << std::endl;
	std::cout << "copymal sound: " << std::endl;
	copymal.makeSound();

	std::cout << "\n\nCat sound: " << std::endl;
	cat.makeSound();
	std::cout << "\n\nDog sound: " << std::endl;
	dog.makeSound();
	std::cout << "\n\nWrong cat sound: " << std::endl;
	wc.makeSound();

	std::cout << "---End of tests on the stack---\n" << std::endl;

	std::cout << "---Tests on the heap---" << std::endl;
	Animal* nanimal = new Animal();
	Animal* ncat = new Cat();
	Animal* ndog = new Dog();
	Animal* ncopymal = new Animal(*ndog);
	WrongAnimal* nwanimal = new WrongAnimal();
	WrongAnimal* nwcat = new WrongCat();

	std::cout << "\n\nncopymal type: " << ncopymal->getType() << std::endl;
	std::cout << "ncopymal sound: " << std::endl;
	ncopymal->makeSound();

	*ncopymal = *ncat;	//dereferencing pointers so operator= is used

	std::cout << "\n\nncopymal type: " << ncopymal->getType() << std::endl;
	std::cout << "ncopymal sound: " << std::endl;
	ncopymal->makeSound();

	*ncopymal = *ndog;

	std::cout << "\n\nncopymal type: " << ncopymal->getType() << std::endl;
	std::cout << "ncopymal sound: " << std::endl;
	ncopymal->makeSound();

	std::cout << "\n\nAnimal type: " << nanimal->getType() << std::endl;
	std::cout << "Animal sound: " << std::endl;
	nanimal->makeSound();

	std::cout << "\n\nCat type: " << ncat->getType() << std::endl;
	std::cout << "Cat sound: " << std::endl;
	ncat->makeSound();

	std::cout << "\n\nDog type: " << ndog->getType() << std::endl;
	std::cout << "Dog sound: " << std::endl;
	ndog->makeSound();

	std::cout << "\n\nWrong animal type: " << nwanimal->getType() << std::endl;
	std::cout << "Wrong animal sound: " << std::endl;
	nwanimal->makeSound();

	std::cout << "\n\nWrong cat type: " << nwcat->getType() << std::endl;
	std::cout << "Wrong cat sound: " << std::endl;
	nwcat->makeSound();
	
	delete nanimal;
	delete ncat;
	delete ndog;
	delete nwanimal;
	delete nwcat;
	delete ncopymal;
	std::cout << "---End of tests on the heap---" << std::endl;

	return (0);
}
