#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	ct("Boris");
	ClapTrap	ct1("Ben");
	ClapTrap	ct2(ct1);
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
	ct2.stats();
	ct2.takeDamage(7);
	ct2.stats();
	ct1.stats();
	ct1 = ct2;
	ct1.stats();
	return 0;
}
