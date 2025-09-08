#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

#define HERD_SIZE 10

int animal_tests(void)
{
	std::cout << "---Animal tests on the stack---" << std::endl;
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

	std::cout << "---End of animal tests on the stack---\n" << std::endl;

	std::cout << "---Animal tests on the heap---" << std::endl;
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
	std::cout << "---End of animal tests on the heap---" << std::endl;

	return (0);
}

int	main(void)
{
	// animal_tests();
	Animal		*herd[HERD_SIZE];
	int			i = 0;
	int			j = 0;
	std::string	test_idea = "test idea";

	std::cout << "\n----Instantiating herd----\n" << std::endl;
	while (i < HERD_SIZE)
	{
		std::cout << "Instantiating herd members" << i << std::endl;
		if (i < (HERD_SIZE / 2))
		{
			herd[i] = new Dog();
			while (j < BRAIN_CAPACITY)
			{
				herd[i]->setIdea(j, test_idea);
				j++;
			}
			j = 0;
		}
		else
		{
			herd[i] = new Cat();
			while (j < BRAIN_CAPACITY)
			{
				herd[i]->setIdea(j, test_idea);
				j++;
			}
			j = 0;
		}
		i++;
	}

	std::cout << "\n----Testing ideas----\n" << std::endl;
	std::cout << "herd[0]->getIdea(0): " << herd[0]->getIdea(0) << std::endl;
	std::cout << "herd[HERD_SIZE - 1]->getIdea(0): " << herd[HERD_SIZE - 1]->getIdea(0) << std::endl;
	herd[0]->setIdea(0, "Some other idea");
	std::cout << "herd[0]->getIdea(0): " << herd[0]->getIdea(0) << std::endl;
	std::cout << "herd[0]->getIdea((BRAIN_CAPACITY + 1)): " << herd[0]->getIdea((BRAIN_CAPACITY + 1)) << std::endl;
	i = 0;

	std::cout << "\n----Testing deep copy----\n" << std::endl;

	Cat *cat = new Cat();
	cat->setIdea(0, "first idea");
	std::cout << "created cat with address: " << cat << "and idea: " << cat->getIdea(0) << std::endl;

	Cat *cat1 = new Cat(*cat);
	cat->setIdea(0, "Changed first idea");
	std::cout << "copy constructed cat from previous cat with address: " << cat1 << "and idea: " << cat->getIdea(0) << std::endl;
	cat1->setIdea(1, "Whole new idea!");

	Cat *cat2 = new Cat();
	*cat2 = *cat1;
	std::cout << "copy assigned cat from previous cat with address: " << cat2 << "and idea: " << cat->getIdea(0) << "and also another idea from previous cat: " << cat2->getIdea(1) << std::endl;

	delete cat;
	delete cat1;
	delete cat2;
	while (i < HERD_SIZE)
	{
		std::cout << "Slaughtering herd member nr: " << i << std::endl;
		delete herd[i];
		i++;
	}
}
