#include "Zombie.hpp"

int	main(void)
{
	Zombie*	pZombie = newZombie("Alex");
	Zombie	Zombon("Alan");

	pZombie->Announce();
	Zombon.Announce();
	delete pZombie;
	randomChump("Adam");
	return (0);
}
