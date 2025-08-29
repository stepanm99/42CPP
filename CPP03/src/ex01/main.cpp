#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

	std::string	enemy = "Enemy";
	int			i = 0;

	//* ClapTrap tests
	std::cout << "\n\nBasic claptrap tests" << std::endl;
	ClapTrap	ct("Boris");
	ct.stats();
	ct.attack(enemy);
	ct.stats();
	while (i++ < 10)
		ct.takeDamage(1);
	ct.takeDamage(1);
	ct.stats();
	ct.beRepaired(1);
	ct.stats();
	i = 0;
	//*/

	//* ScavTrap tests
	std::cout << "\n\nScavTrap tests" << std::endl;
	ScavTrap	st("John");
	ScavTrap	st1("Julie");
	ScavTrap	st2("Fern");

	st.stats();
	st.attack(enemy);
	while (i++ < 30)
		st.takeDamage(3);
	st.stats();
	st.beRepaired(20);
	st.stats();
	st.guardGate();
	//*/

	std::cout << "\n\nend of tests" << std::endl;
	return 0;
}
