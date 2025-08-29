#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &original);
	FragTrap &operator=(FragTrap const &original);
	~FragTrap();
	void attack(std::string target);
	void highFiveGuys(void);
};

#endif
