#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie*		Horde = new Zombie[n];
	std::string	nname;
	int			i = 0;

	while (i < n)
	{
		Horde[i].setName(name);
		i++;
	}
	return (Horde);
}
