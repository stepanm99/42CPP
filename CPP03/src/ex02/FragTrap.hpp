#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &original);
	FragTrap &operator=(FragTrap const &original);
	~FragTrap();
	void attack(std::string target);
	void highFiveGuys(void);
};

#endif
