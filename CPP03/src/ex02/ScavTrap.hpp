#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void attack(std::string target);
	void guardGate();
};

#endif
