#include "Zombie.hpp"

int	main(void)
{
	Zombie* Horde = zombieHorde(10, "Pepa");
	int		i = 0;

	while (i < 10)
	{
		std::cout << "Announcing zombie nr: " << (i + 1) << std::endl;
		Horde[i].Announce();
		i++;
	}
	delete[] Horde;
	return (0);
}
