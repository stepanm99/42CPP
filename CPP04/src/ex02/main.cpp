#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

#define HERD_SIZE 10

int ex00_main(void)
{
	std::cout << "---Tests on the stack---" << std::endl;
	Cat			cat;
	Cat			copymal(cat);
	Dog			dog;
	WrongCat	wc;

	std::cout << "Cat type: " << cat.getType() << std::endl;
	std::cout << "Dog type: " << dog.getType() << std::endl;
	std::cout << "Wrong cat type: " << wc.getType() << std::endl;
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
	Cat* ncat = new Cat();
	Dog* ndog = new Dog();
	WrongAnimal* nwanimal = new WrongAnimal();
	WrongAnimal* nwcat = new WrongCat();

	std::cout << "Cat type: " << ncat->getType() << std::endl;
	std::cout << "Cat sound: " << std::endl;
	ncat->makeSound();

	std::cout << "Dog type: " << ndog->getType() << std::endl;
	std::cout << "Dog sound: " << std::endl;
	ndog->makeSound();
	
	delete ncat;
	delete ndog;
	delete nwanimal;
	delete nwcat;
	std::cout << "---End of tests on the heap---" << std::endl;

	return (0);
}

int	ex01_main(void)
{
	// ex00_main();
	AAnimal		*herd[HERD_SIZE];
	int			i = 0;
	int			j = 0;

	std::cout << "\n----Instantiating herd----\n" << std::endl;
	while (i < HERD_SIZE)
	{
		std::cout << "Instantiating herd members" << i << std::endl;
		if (i < (HERD_SIZE / 2))
		{
			herd[i] = new Dog();
			while (j < BRAIN_CAPACITY)
			{
				dynamic_cast<Dog*>(herd[i])->setIdea(j, "test dog idea");
				j++;
			}
			j = 0;
		}
		else
		{
			herd[i] = new Cat();
			while (j < BRAIN_CAPACITY)
			{
				dynamic_cast<Cat*>(herd[i])->setIdea(j, "test cat idea");
				j++;
			}
			j = 0;
		}
		i++;
	}

	std::cout << "\n----Testing ideas----\n" << std::endl;
	std::cout << "herd[0]->getIdea(0): " << dynamic_cast<Dog*>(herd[0])->getIdea(0) << std::endl;
	std::cout << "herd[HERD_SIZE - 1]->getIdea(0): " << dynamic_cast<Cat*>(herd[HERD_SIZE - 1])->getIdea(0) << std::endl;
	dynamic_cast<Dog*>(herd[0])->setIdea(0, "Some other idea");
	std::cout << "herd[0]->getIdea(0): " << dynamic_cast<Dog*>(herd[0])->getIdea(0) << std::endl;
	std::cout << "herd[0]->getIdea(BRAIN_CAPACITY): " << dynamic_cast<Dog*>(herd[0])->getIdea(BRAIN_CAPACITY) << std::endl;
	std::cout << "herd[0]->getIdea(BRAIN_CAPACITY - 1): " << dynamic_cast<Dog*>(herd[0])->getIdea(BRAIN_CAPACITY - 1) << std::endl;
	i = 0;

	std::cout << "\n----Testing deep copy----\n" << std::endl;

	Cat *cat = new Cat();
	cat->setIdea(0, "first idea");
	std::cout << "\ncreated cat with address: " << cat << "and idea: " << cat->getIdea(0) << std::endl;

	Cat *cat1 = new Cat(*cat);
	std::cout << "changing idea 0 of cat to: Changed first idea" << std::endl;
	cat->setIdea(0, "Changed first idea");
	std::cout << "\n\ncopy constructed cat1 from previous cat with address: " << cat1 << "\nand idea: " << cat->getIdea(0) << "which should be different from changed cat idea0: " << cat->getIdea(0) << std::endl;
	cat1->setIdea(1, "Whole new idea!");

	Cat *cat2 = new Cat();
	*cat2 = *cat1;
	std::cout << "\n\ncopy assigned cat from previous cat with address: " << cat2 << "\nand idea: " << cat->getIdea(0) << "\nand also another idea from previous cat: " << cat2->getIdea(1) << std::endl;

	std::cout << "\n\nchecking idea 0 of all 3 cats" << std::endl;
	std::cout << "cat idea 0: " << cat->getIdea(0) << std::endl;
	std::cout << "cat1 idea 0: " << cat1->getIdea(0) << std::endl;
	std::cout << "cat2 idea 0: " << cat2->getIdea(0) << std::endl;
	std::cout << "changing idea 0 of each cat to \"cat(n) idea\"" << std::endl;
	cat->setIdea(0, "cat idea");
	cat1->setIdea(0, "cat1 idea");
	cat2->setIdea(0, "cat2 idea");
	std::cout << "\n\nchecking idea 0 of all 3 cats" << std::endl;
	std::cout << "cat idea 0: " << cat->getIdea(0) << std::endl;
	std::cout << "cat1 idea 0: " << cat1->getIdea(0) << std::endl;
	std::cout << "cat2 idea 0: " << cat2->getIdea(0) << std::endl;


	Dog *dog = new Dog();
	dog->setIdea(0, "first idea");
	std::cout << "\n\ncreated dog with address: " << dog << "and idea: " << dog->getIdea(0) << std::endl;

	Dog *dog1 = new Dog(*dog);
	std::cout << "\n\nchanging idea 0 of dog to: Changed first idea" << std::endl;
	dog->setIdea(0, "Changed first idea");
	std::cout << "\n\ncopy constructed dog1 from previous dog with address: " << dog1 << "\nand idea: " << dog1->getIdea(0) << "which should be different from changed dog idea0: " << dog->getIdea(0) << std::endl;
	dog1->setIdea(1, "Whole new idea!");

	Dog *dog2 = new Dog();
	*dog2 = *dog1;
	std::cout << "\n\ncopy assigned dog from previous dog with address: " << dog2 << "\nand idea: " << dog->getIdea(0) << "\nand also another idea from previous dog: " << dog2->getIdea(1) << std::endl;

	std::cout << "\n\nchecking idea 0 of all 3 dogs" << std::endl;
	std::cout << "dog idea 0: " << dog->getIdea(0) << std::endl;
	std::cout << "dog1 idea 0: " << dog1->getIdea(0) << std::endl;
	std::cout << "dog2 idea 0: " << dog2->getIdea(0) << std::endl;
	std::cout << "changing idea 0 of each dog to \"dog(n) idea\"" << std::endl;
	dog->setIdea(0, "dog idea");
	dog1->setIdea(0, "dog1 idea");
	dog2->setIdea(0, "dog2 idea");
	std::cout << "\n\nchecking idea 0 of all 3 dogs" << std::endl;
	std::cout << "dog idea 0: " << dog->getIdea(0) << std::endl;
	std::cout << "dog1 idea 0: " << dog1->getIdea(0) << std::endl;
	std::cout << "dog2 idea 0: " << dog2->getIdea(0) << std::endl;

	std::cout << "\n----Deleting objects at the end of the program----" << std::endl;
	delete cat;
	delete cat1;
	delete cat2;
	delete dog;
	delete dog1;
	delete dog2;
	while (i < HERD_SIZE)
	{
		std::cout << "Slaughtering herd member nr: " << i << std::endl;
		delete herd[i];
		i++;
	}
	return (0);
}

int main()
{
	ex01_main();
	// AAnimal *aanimal = new AAnimal(); //throws error cause it's abstract class
	Cat *gatito = new Cat();
	Cat *catto;
	Dog *doggito = new Dog();
	Dog *doggo;

	std::cout << "\n\nCat type: " << gatito->getType() << std::endl;
	std::cout << "Saving some random idea to the gatito" << std::endl;
	gatito->setIdea(0, "Some random idea");

	catto = new Cat(*gatito);

	std::cout << "Idea of cloned cat: " << catto->getIdea(0) << std::endl;


	std::cout << "\n\nDog type: " << doggito->getType() << std::endl;
	std::cout << "Saving some random idea to the doggito" << std::endl;
	doggito->setIdea(0, "Some random idea");

	doggo = new Dog(*doggito);

	std::cout << "Idea of cloned dog: " << doggo->getIdea(0) << std::endl;

	delete gatito;
	delete catto;
	delete doggito;
	delete doggo;
}
