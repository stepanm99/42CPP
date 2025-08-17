#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl 		Harl;
	std::string	level;

	if (argc != 2)
	{
		std::cout << "It takes just one argument..." << std::endl;
		return (-1);
	}
	level = argv[1];
	Harl.complain(level);
	return (0);
}
