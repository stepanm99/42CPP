#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong arguments!" << std::endl;
		std::cout << "Usage: sed <text_file> <orig_str> <replacement_str>" << std::endl;
		return (-1);
	}
	std::string filename = 		argv[1];
	std::string original = 		argv[2];
	std::string replacement =	argv[3];
	std::ifstream f_in(NULL);
	std::ofstream f_out(NULL);

	f_in.open(filename, std::ios::out);

	std::cout << "filename: " << filename << std::endl;
	std::cout << "original: " << original << std::endl;
	std::cout << "replacement: " << replacement << std::endl;

	std::cout << f_in << std::endl;
	f_in.close();
	return (0);
}
