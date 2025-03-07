#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap named " << this->name << " constructed" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " is destroyed..." << std::endl;
}


void FragTrap::highFiveGuys()
{
	std::cout << this->name << ": Hey, wassup, gimme high five, man!" << std::endl;
}

void FragTrap::attack(std::string target)
{
	if (!this->energyPoints || !this->hitPoints)
	{
		if (!this->energyPoints)
			std::cout << "FragTrap named " << this->name << " is out of juice :/" << std::endl;
		if (!this->hitPoints)
			std::cout << "FragTrap named " << this->name << " has no life left" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}
