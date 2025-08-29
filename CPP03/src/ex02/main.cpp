#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int clapTrapTests(void)
{
	std::cout << "Instantiating ClapTraps\n" << std::endl;
	ClapTrap	ct("Boris");
	ClapTrap	ct1("Ben");
	std::cout << "\nInstantiating ClapTrap using copy constructor" << std::endl;
	ClapTrap	ct2(ct1);
	std::string	enemy = "Enemy";
	int			i = 0;

	std::cout << "\ntesting ClapTrap class functions" << std::endl;
	ct.stats();
	ct.attack(enemy);
	ct.stats();
	std::cout << "\n incremental damage for Boris until obliteration" << std::endl;
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
	std::cout << "\ntesting copy assignment, Ben_copy took 7 damage and that is copy assigned to Ben" << std::endl;
	ct1 = ct2;
	ct1.stats();
	std::cout << "\nrepairing Ben by 5 points" << std::endl;
	ct1.beRepaired(5);
	ct1.stats();
	std::cout << "End of ClapTrap test\n\n" << std::endl;
	return 0;
}

int scavTrapTests(void)
{

	std::string	enemy = "Enemy";
	int			i = 0;

	clapTrapTests();
	std::cout << "\n\nScavTrap tests" << std::endl;
	ScavTrap	st("John");
	ScavTrap	st1("Julie");
	std::cout << "\ncopy constructing from ST named Julie" << std::endl;
	ScavTrap	st2(st1);

	st.stats();
	st.attack(enemy);
	std::cout << "\nincrementally damaging ST until it dies" << std::endl;
	while (i++ < 30)
		st.takeDamage(3);
	st.stats();
	std::cout << "\ntrying to repair John" << std::endl;
	st.beRepaired(20);
	st.stats();
	std::cout << "\ntelling John to guard gate" << std::endl;
	st.guardGate();
	st1.stats();
	st2.stats();
	st2.takeDamage(7);
	st2.stats();
	st1 = st2;
	st1.stats();
	std::cout << "\n\nend of tests :c" << std::endl;
	return 0;
}

int main(void)
{

	std::string	enemy = "Enemy";
	int			i = 0;

	scavTrapTests();

	std::cout << "\n\nFragTrap tests" << std::endl;
	FragTrap	ft("Mike");
	FragTrap	ft1("Pence");
	std::cout << "\ncopy constructing from FT named Pence" << std::endl;
	FragTrap	ft2(ft1);

	ft.stats();
	ft.attack(enemy);
	std::cout << "\nincremental damage of FT Mike" << std::endl;
	while (i++ < 30)
		ft.takeDamage(3);
	ft.stats();
	std::cout << "\ntrying to repair FT Mike by 20 points" << std::endl;
	ft.beRepaired(20);
	ft.stats();
	std::cout << "\n testing special ability of FragTraps on Mike" << std::endl;
	ft.highFiveGuys();

	ft1.stats();
	ft1.takeDamage(7);
	ft1.stats();
	ft2.stats();
	std::cout << "\ncopy assigning damaged Pence so the Pence_copy is equally damaged" << std::endl;
	ft2 = ft1;
	ft2.stats();
	//*/

	std::cout << "\n\nend of tests" << std::endl;
	return 0;
}
