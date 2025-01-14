#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	Name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	Announce(void);
	void	setName(std::string name);
};

Zombie*	zombieHorde(int n, std::string name);

#endif
