#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	ct("Boris");
	ScavTrap	st("John");
	std::string	enemy = "Enemy";
	int			i = 0;

	ct.stats();
	st.stats();
	st.attack(enemy);
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
