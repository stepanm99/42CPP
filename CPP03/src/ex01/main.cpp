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
	ScavTrap	st2(st1);

	st.stats();
	st.attack(enemy);
	while (i++ < 30)
		st.takeDamage(3);
	st.stats();
	st.beRepaired(20);
	st.stats();
	st.guardGate();
	st1.stats();
	st2.stats();
	st2.takeDamage(7);
	st2.stats();
	st1 = st2;
	st1.stats();
	//*/

	std::cout << "\n\nend of tests" << std::endl;
	return 0;
}
