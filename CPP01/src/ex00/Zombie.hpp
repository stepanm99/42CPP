#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

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
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
};

#endif
