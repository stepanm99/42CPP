#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Default ScavTrap constructed" << std::endl;
	this->name = "ScavvieTrappie";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap named " << this->name << " constructed" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &original)
{
	std::string copy_name = original.name;

	copy_name.append("_copy");
	this->name = copy_name;
	this->hitPoints = original.hitPoints;
	this->energyPoints = original.energyPoints;
	this->attackDamage = original.attackDamage;
	std::cout << "ScavTrap named " << this->name << " copy constructed" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &original)
{
	if (this->name.length() == 0)
		this->name = original.name;
	this->hitPoints = original.hitPoints;
	this->energyPoints = original.energyPoints;
	this->attackDamage = original.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " is destroyed..." << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is guarding the gate now!" << std::endl;
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

