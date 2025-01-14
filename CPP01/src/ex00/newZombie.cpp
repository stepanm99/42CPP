#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie*	pZomboid;

	pZomboid = new Zombie(name);
	return (pZomboid);
}
