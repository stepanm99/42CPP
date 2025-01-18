#include <iostream>
#include "Sed.hpp"

int main(int argc, char **argv)
{
	Sed Sed;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		std::cout << "Usage: sed <text_file> <orig_str> <replacement_str>" << std::endl;
		return (-1);
	}
	Sed.sed_replace(argv[1], argv[2], argv[3]);
	return (0);
}
