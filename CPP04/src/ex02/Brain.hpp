#ifndef BRAIN_HPP
# define BRAIN_HPP

#include<string>

#define BRAIN_CAPACITY 100

class Brain
{
protected:
	std::string ideas[BRAIN_CAPACITY];
public:
	Brain();
	Brain(Brain const &original);
	Brain &operator=(Brain const &original);
	~Brain();
	const std::string	getIdea(int n);
	void				setIdea(int n, const std::string new_idea);
};

#endif
