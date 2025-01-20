#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "DEBUG: I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"\
	<< std::endl;
}

void Harl::info()
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. \
You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking \
for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. \
I’ve been coming for years whereas you started working here since \
last month." << std::endl;
}

void Harl::error()
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager \
now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string	lvl[MAX_LEVELS] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void (Harl::*fpointer[MAX_LEVELS]) (void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};

	int	i = 0;

	while (i < MAX_LEVELS)
	{
		if (lvl[i] == level)
			break;
		i++;
	}
	if (i == MAX_LEVELS)
		std::cout << "I have nothing to say :(" << std::endl;
	else
		(this->*fpointer[i])();
}
