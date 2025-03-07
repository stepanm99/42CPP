#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	st.stats();
	st.attack(enemy);
	while (i++ < 30)
		st.takeDamage(3);
	st.stats();
	st.beRepaired(20);
	st.stats();
	st.guardGate();
	//*/

	//* FragTrap tests
	std::cout << "\n\nFragTrap tests" << std::endl;
	FragTrap	ft("Mike");

	ft.stats();
	ft.attack(enemy);
	while (i++ < 30)
		ft.takeDamage(3);
	ft.stats();
	ft.beRepaired(20);
	ft.stats();
	ft.highFiveGuys();
	//*/

	std::cout << "\n\nend of tests" << std::endl;
	return 0;
}
