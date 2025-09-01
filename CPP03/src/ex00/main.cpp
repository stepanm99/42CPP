#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Instantiating ClapTraps\n" << std::endl;
	ClapTrap	ct("Boris");
	ClapTrap	ct1("Ben");
	std::cout << "\nInstantiating ClapTrap using copy constructor" << std::endl;
	ClapTrap	ct2(ct1);
	std::cout << "\nTesting default constructor" << std::endl;
	ClapTrap	deftrap;
	deftrap.stats();

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
	return 0;
}
