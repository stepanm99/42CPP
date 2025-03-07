#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap named " << this->name << " constructed" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " is destroyed..." << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is guarding th gate now!" << std::endl;
}

void ScavTrap::attack(std::string target)
{
	if (!this->energyPoints || !this->hitPoints)
	{
		if (!this->energyPoints)
			std::cout << "ScavTrap named " << this->name << " is out of juice :/" << std::endl;
		if (!this->hitPoints)
			std::cout << "ScavTrap named " << this->name << " has no life left" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

