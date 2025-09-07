#ifndef BRAIN_HPP
# define BRAIN_HPP

#include<string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(Brain const &original);
	Brain &operator=(Brain const &original);
	~Brain();
};

#endif
