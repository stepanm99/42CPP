#include "Sed.hpp"

Sed::Sed()
{
}

Sed::Sed(std::string inf, std::string ori, std::string re)
{
	in_filename = inf;
	original = ori;
	replacement = re;
}

Sed::~Sed()
{}

void Sed::sed_replace(std::string inf, std::string ori, std::string re)
{
	in_filename = inf;
	original = ori;
	replacement = re;
	this->sed_replace();
}


void	Sed::sed_replace()
{
	out_filename = in_filename;
	out_filename.append(".replace");

	f_in.open(in_filename, std::ios::in);
	if (!f_in.is_open())
	{
		std::cout << "Error while opening: " << in_filename << std::endl;
		std::cout << "Does the file exist?" << std::endl;
		return ;
	}
	f_out.open(out_filename, std::ios::out);

	while(f_in.get(buff_char))
	{
		if (buff_char == original.front())
		{
			buff.push_back(buff_char);
			while (i < original.size() && f_in.get(buff_char))
			{
				buff.push_back(buff_char);
				if (buff_char != original[i])
					break;
				i++;
			}
			i = 1;
			if (buff == original)
				f_out << replacement;
			else
				f_out << buff;
			buff.clear();
		}
		else
			f_out << buff_char;
	}
	f_in.close();
	f_out.close();
	buff.clear();
	out_filename.clear();
}
