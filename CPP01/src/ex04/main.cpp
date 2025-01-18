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
	std::string in_filename = 	argv[1];
	std::string out_filename;
	std::string original = 		argv[2];
	std::string replacement =	argv[3];
	std::string input;
	std::ifstream f_in(NULL);
	std::ofstream f_out(NULL);
	char		buff_char;

	out_filename = in_filename;
	out_filename.append(".replace");

	f_in.open(in_filename, std::ios::in);
	f_out.open(out_filename, std::ios::out);

	std::cout << "in filename: " << in_filename << std::endl;
	std::cout << "out filename: " << out_filename << std::endl;
	std::cout << "original: " << original << std::endl;
	std::cout << "replacement: " << replacement << std::endl;

	std::string buff;
	int	i = 1;
	while(f_in.get(buff_char))
	{
		if (buff_char == original.front())
		{
			buff.push_back(buff_char);
			while (i < original.size() && f_in.get(buff_char))
			{
				buff.push_back(buff_char);
				std::cout << i << std::endl;
				i++;
			}
			i = 0;
			std::cout << "Buffer: " << "|" << buff << "|" << std::endl;
			if (buff == original)
			{
				std::cout << "original is equal to buffer" << std::endl;
				f_out << replacement;
				std::cout << "tobuf: |" << replacement << std::endl;
				buff.clear();
			}
			else
			{
				f_out << buff;
				std::cout << "tobuf: |" << buff << "|" << std::endl;
				buff.clear();
			}
		}
		else
		{
			input.push_back(buff_char);
			f_out << buff_char;
			std::cout << "tobuf: |" << buff_char << "|" << std::endl;
		}
	}

	std::cout << input << std::endl;
	f_in.close();
	f_out.close();
	return (0);
}
