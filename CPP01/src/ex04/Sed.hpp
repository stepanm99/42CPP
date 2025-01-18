#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <fstream>
#include <iostream>

class Sed
{
private:
	std::string		out_filename;
	std::string		buff;
	std::ifstream	f_in;
	std::ofstream	f_out;
	char			buff_char;
	int				i = 1;
public:
	Sed();
	Sed(std::string inf, std::string ori, std::string re);
	~Sed();
	std::string		in_filename;
	std::string		original;
	std::string		replacement;
	void	sed_replace();
	void	sed_replace(std::string inf, std::string ori, std::string re);
};

#endif
