#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	ct("Boris");
	std::string	enemy = "Enemy";
	int			i = 0;

	ct.stats();
	ct.attack(enemy);
	ct.stats();
	while (i++ < 10)
		ct.takeDamage(1);
	ct.takeDamage(1);
	ct.stats();
	ct.beRepaired(1);
	ct.stats();
	return 0;
}
