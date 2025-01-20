#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include<iostream>

#define MAX_LEVELS 4

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	enum	e_levels
	{
		e_info,
		e_debug,
		e_warning,
		e_error
	};

public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif
