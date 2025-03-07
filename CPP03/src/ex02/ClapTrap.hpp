#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void stats(void);
};

#endif
