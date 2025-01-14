#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name): Name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "Destroing " << Name << std::endl;
}

void	Zombie::Announce(void)
{
	std::cout << this->Name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
