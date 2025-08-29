#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &original);
	ScavTrap &operator=(ScavTrap const &original);
	~ScavTrap();
	void attack(std::string target);
	void guardGate();
};

#endif
