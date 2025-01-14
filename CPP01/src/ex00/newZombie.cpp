#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie*	pZomboid = new Zombie(name);
	return (pZomboid);
}
