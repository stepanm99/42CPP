#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main(void)
{
	// Zombie*	pZombie;
	Zombie	Zombon("Alan");

	// pZombie = NULL;
	// pZombie = newZombie("Alan");
	std::cout << "Hello World!" << std::endl;
	Zombon.Announce();
	// delete pZombie;
	return (0);
}
