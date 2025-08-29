#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap with name |" << name << "| constructed" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}
ClapTrap::ClapTrap(ClapTrap const &original)
{
	this->name = original.name;
	this->hitPoints = original.hitPoints;
	this->energyPoints = original.energyPoints;
	this->attackDamage = original.attackDamage;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &original)
{
	this->hitPoints = original.hitPoints;
	this->energyPoints = original.energyPoints;
	this->attackDamage = original.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap with name " << this->name << " destructed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (!this->energyPoints || !this->hitPoints)
	{
		if (!this->energyPoints)
			std::cout << "ClapTrap named " << this->name << " is out of juice :/" << std::endl;
		if (!this->hitPoints)
			std::cout << "Claptrap named " << this->name << " has no life left" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints)
		this->hitPoints -= amount;
	else if (!this->hitPoints)
		std::cout << "It's already dead, can't you see?" << std::endl;
	else if ((this->hitPoints - amount) < 0)
		std::cout << "ClapTrap is absolutely obliterated!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hitPoints)
	{
		std::cout << "I am no necromancer, it's dead beyond repair..." << std::endl;
		return ;
	}
	if (!this->energyPoints)
	{
		std::cout << "ClapTrap tired, ClapTrap can't do this at the moment..." << std::endl;
		return ;
	}
	this->hitPoints += amount;
	this->energyPoints--;
}

void ClapTrap::stats(void)
{
	std::cout << "name:\t" << this->name << std::endl;
	std::cout << "HP:\t" << this->hitPoints << std::endl;
	std::cout << "EP:\t" << this->energyPoints << std::endl;
	std::cout << "AD:\t" << this->attackDamage << std::endl;
}